// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CosmeticMetaTagContainer.h"
#include "ScriptedActionVariant.h"
#include "ScriptedActionVariantDef.generated.h"


USTRUCT()
struct FScriptedActionVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FScriptedActionVariant> VariantActions;                                       
	FCosmeticMetaTagContainer MetaTags;
};
