// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "UE4_ZeroGameModeBase.h"

void AUE4_ZeroGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, TEXT("Hello!"));
	}
}
