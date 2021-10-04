// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "McpItemDefinitionBase.h"
#include "FBaseVariantDef.generated.h"


USTRUCT()
struct FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		bool bStartUnlocked;

	UPROPERTY(EditAnywhere)
		bool bIsDefault;

	UPROPERTY(EditAnywhere)
		bool bHideIfNotOwned;

	UPROPERTY(EditAnywhere)
		FGameplayTag CustomizationVariantTag;

	UPROPERTY(EditAnywhere)
		FText VariantName;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> PreviewImage;

	UPROPERTY(EditAnywhere)
		FText UnlockRequirements;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMcpItemDefinitionBase> UnlockingItemDef;
};
