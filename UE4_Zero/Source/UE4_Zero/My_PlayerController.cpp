// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "My_PlayerController.h"
#include "EngineUtils.h"

#include "PlayerZero.h"

AMy_PlayerController::AMy_PlayerController()
{
	for (TObjectIterator<APlayerZero> Itr; Itr; ++Itr)
	{
		m_zeros[0] = itr;
	}
}

void AMy_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	inputCompanant->bindaxis
}

void AMy_PlayerController::MoveHorizontal(float value)
{

}
