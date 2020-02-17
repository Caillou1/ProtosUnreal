// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	m_SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring"));
	m_CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("PropulsionAxis", this, &ABasePawn::OnPropulsionAxis);
	PlayerInputComponent->BindAxis("LeftStickHorizontalAxis", this, &ABasePawn::OnLeftStickHorizontalAxis);
	PlayerInputComponent->BindAxis("LeftStickVerticalAxis", this, &ABasePawn::OnLeftStickVerticalAxis);
	PlayerInputComponent->BindAxis("RightStickHorizontalAxis", this, &ABasePawn::OnRightStickHorizontalAxis);
	PlayerInputComponent->BindAxis("RightStickVerticalAxis", this, &ABasePawn::OnRightStickVerticalAxis);

	PlayerInputComponent->BindAction("FireAction", EInputEvent::IE_Pressed, this, &ABasePawn::OnFireActionStart);
	PlayerInputComponent->BindAction("FireAction", EInputEvent::IE_Released, this, &ABasePawn::OnFireActionEnd);
}

void ABasePawn::OnFireActionStart()
{
	GetWorld()->GetTimerManager().SetTimer(m_FireTimerHandle, this, &ABasePawn::FireCurrentWeapon, 1.0f, true, 0.0f);
}

void ABasePawn::OnFireActionEnd()
{
	GetWorld()->GetTimerManager().ClearTimer(m_FireTimerHandle);
}

void ABasePawn::FireCurrentWeapon()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Fire");
}

