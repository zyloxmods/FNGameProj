// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Variants/MarshalledVFXAuthoredData.h"
#include "MarshalledVFX_AuthoredDataConfig.generated.h"


UCLASS()
class  UMarshalledVFX_AuthoredDataConfig : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		FMarshalledVFXAuthoredData  Data;
};
