// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "My_PlayerController.h"
#include "EngineUtils.h"

#include "PlayerZero.h"

#include <string.h>

AMy_PlayerController::AMy_PlayerController()
{
	for (TObjectIterator<APlayerZero> Itr; Itr; ++Itr)
	{
		//m_zeros[0] = itr;
		
		Itr->InputEnabled();

		if (GEngine)
		{
			if (Itr->InputEnabled())
			{

				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Input Enabled: True"));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Input Enabled: False"));

			}
		}

		break;
	}
}

void AMy_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//inputCompanant->bindaxis
}

void AMy_PlayerController::MoveHorizontal(float value)
{

}
