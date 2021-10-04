// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "VectorParticleParameter.h"
#include "FloatParticleParameter.h"
#include "AthenaSkyDiveContrailItemDefinition.generated.h"

UCLASS(BlueprintType)
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
	
	UPROPERTY(EditAnywhere)
	TArray<FVectorParticleParameter>   VectorParameters;
	
    UPROPERTY(EditAnywhere)
	TArray<FFloatParticleParameter>    FloatParameters;
	
	
};