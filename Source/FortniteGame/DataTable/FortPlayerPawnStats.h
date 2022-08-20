// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPawnStats.h"
#include "FortPlayerPawnStats.generated.h"

/**
 * 
 */
USTRUCT()
struct FORTNITEGAME_API FFortPlayerPawnStats : public FFortPawnStats
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	float MaxJumpTime;     

	UPROPERTY(EditAnywhere)
	float MaxStamina;       

	UPROPERTY(EditAnywhere)
	float StaminaRegenRate;         

	UPROPERTY(EditAnywhere)
	float StaminaRegenDelay;      

	UPROPERTY(EditAnywhere)
	float SprintingStaminaExpenditureRate;
};
