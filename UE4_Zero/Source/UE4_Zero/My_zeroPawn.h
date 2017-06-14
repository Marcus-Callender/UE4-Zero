// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "My_zeroPawn.generated.h"

UCLASS()
class UE4_ZERO_API AMy_zeroPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMy_zeroPawn();

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

	//UPROPERTY(VisibleAnywhere)
	//UCameraComponent* m_camera;
	
};
