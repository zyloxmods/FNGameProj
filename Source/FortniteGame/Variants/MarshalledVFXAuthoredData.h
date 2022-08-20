// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MarshalledVFXData.h"
#include "ParameterNameMapping.h"
#include "MarshalledVFXAuthoredData.generated.h"


USTRUCT()
struct FMarshalledVFXAuthoredData 
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	TArray<FMarshalledVFXData> NiagaraVFX;                                        

	UPROPERTY(EditAnywhere)
	TArray<FMarshalledVFXData> CascadeVFX;                                      
	
	UPROPERTY(EditAnywhere)
	TMap<FName, FParameterNameMapping>NameReplacements;    
	
};
