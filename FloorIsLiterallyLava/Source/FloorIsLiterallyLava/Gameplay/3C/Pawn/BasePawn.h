// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "BasePawn.generated.h"

UCLASS()
class FLOORISLITERALLYLAVA_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//Input axis events
	void OnPropulsionAxis(const float rate) { m_PropulsionRate = rate; }
	void OnLeftStickHorizontalAxis(const float rate) { m_LeftStickHorizontalRate = rate; }
	void OnLeftStickVerticalAxis(const float rate) { m_LeftStickVerticalRate = rate; }
	void OnRightStickHorizontalAxis(const float rate) { m_RightStickHorizontalRate = rate; }
	void OnRightStickVerticalAxis(const float rate) { m_RightStickVerticalRate = rate; }

	//Input events
	void OnFireActionStart();
	void OnFireActionEnd();

	//Gameplay
	void FireCurrentWeapon();

	//VARIABLES
private:
	//Components
	UPROPERTY(EditAnywhere)
	UCameraComponent* m_CameraComponent;
	UPROPERTY(EditAnywhere)
	USpringArmComponent* m_SpringArmComponent;

	float m_PropulsionRate = 0.0f;
	float m_LeftStickHorizontalRate = 0.0f;
	float m_LeftStickVerticalRate = 0.0f;
	float m_RightStickHorizontalRate = 0.0f;
	float m_RightStickVerticalRate = 0.0f;

	FTimerHandle m_FireTimerHandle;
};
