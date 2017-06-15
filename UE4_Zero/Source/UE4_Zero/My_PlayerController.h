// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "My_PlayerController.generated.h"

#include "PlayerZero.h"

/**
 *
 */
UCLASS()
class UE4_ZERO_API AMy_PlayerController : public APlayerController
{
	GENERATED_BODY()

		AMy_PlayerController();

	void SetupInputComponent();

	void MoveHorizontal(float value);

private:

	APlayerZero[2] m_zeros;

};
