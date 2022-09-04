// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaSkyDiveContrailItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaSkyDiveContrailItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FSoftObjectPath              ContrailEffect;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath              FrontEndContrailEffect;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath              NiagaraContrailEffect;

	UPROPERTY(EditAnywhere)
		FVector                      DefaultVelocityVector;

	UPROPERTY(EditAnywhere)
		FName                        VelocityVectorParameterName;

	UPROPERTY(EditAnywhere)
		FName                        ParaGlideLeanParameterName;

	//Missed Offset
	/*
	UPROPERTY(EditAnywhere)
		TArray<FVectorParticleParameter>   VectorParameters;

	UPROPERTY(EditAnywhere)
		TArray<FFloatParticleParameter>    FloatParameters;
	*/
};
