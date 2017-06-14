// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "ZeroCharicter.generated.h"

UCLASS()
class UE4_ZERO_API AZeroCharicter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZeroCharicter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void  MoveHorizontal(float value);
	void  MoveVertical(float value);

private:
	FVector m_moveTo;
	
};
