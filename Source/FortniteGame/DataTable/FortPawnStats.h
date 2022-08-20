// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPawnStats.generated.h"

/**
 * 
 */
USTRUCT()
struct FORTNITEGAME_API FFortPawnStats : public FTableRowBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	float                                              MaximumHealth;    

	UPROPERTY(EditAnywhere)
	float                                              SpeedWalk;       

	UPROPERTY(EditAnywhere)
	float                                              SpeedRun;   

	UPROPERTY(EditAnywhere)
	float                                              SpeedSprint;  

	UPROPERTY(EditAnywhere)
	float                                              SpeedCrouchedRun;     

	UPROPERTY(EditAnywhere)
	float                                              SpeedCrouchedSprint;  

	UPROPERTY(EditAnywhere)
	float                                              SpeedBackwardsMultiplier;    

	UPROPERTY(EditAnywhere)
	float                                              SpeedDBNO;               

	UPROPERTY(EditAnywhere)
	float                                              AccelerationStrafeMultiplierSprint;    

	UPROPERTY(EditAnywhere)
	class UCurveTable*                                 FallingDamageTable;     

	UPROPERTY(EditAnywhere)
	FName                                       FallingDamageTableRow;    

	UPROPERTY(EditAnywhere)
	float                                              HealthRegenRate;         

	UPROPERTY(EditAnywhere)
	float                                              HealthRegenDelay;         

	UPROPERTY(EditAnywhere)
	float                                              HealthRegenThreshold;       

	UPROPERTY(EditAnywhere)
	float                                              MaxShield;           

	UPROPERTY(EditAnywhere)
	float                                              ShieldRegenRate;  

	UPROPERTY(EditAnywhere)
	float                                              ShieldRegenDelay;  

	UPROPERTY(EditAnywhere)
	float                                              ShieldRegenThreshold;  

	UPROPERTY(EditAnywhere)
	float                                              MaxControlResistance;     

	UPROPERTY(EditAnywhere)
	float                                              ControlResistanceRegenRate;   

	UPROPERTY(EditAnywhere)
	float                                              ControlResistanceRegenDelay;     

	UPROPERTY(EditAnywhere)
	float                                              KnockbackMultiplier;       

	UPROPERTY(EditAnywhere)
	float                                              KnockbackThreshold;                                    
};
