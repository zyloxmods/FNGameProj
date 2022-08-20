// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "BaseVariantDef.h"
#include "PartVariantDef.h"
#include "FortCosmeticCharacterPartVariant.generated.h"


UCLASS()
class UFortCosmeticCharacterPartVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FPartVariantDef> PartOptions;
};
