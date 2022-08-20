// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../ItemDef/FortAccountItemDefinition.h"
#include "../ItemDef/FortItemDefinition.h"
#include "../Enum/EItemProfileType.h"
#include "FortItemAccessTokenType.generated.h"


UCLASS()
class FORTNITEGAME_API UFortItemAccessTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	EItemProfileType ProfileType;                                       

	UPROPERTY(EditAnywhere)
	UFortItemDefinition* access_item;                                      

	UPROPERTY(EditAnywhere)
	FText UnlockDescription;                                
};
