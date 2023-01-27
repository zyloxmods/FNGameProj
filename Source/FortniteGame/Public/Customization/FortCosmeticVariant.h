// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTags.h"
#include "Items/FortItemDefinition.h"
#include "Items/FortAccountItemDefinition.h"
#include "Customization/BaseVariantDef.h"
#include "FortCosmeticVariant.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCosmeticVariantInfo
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag VariantChannelTag; 

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag ActiveVariantTag; 
};

USTRUCT(BlueprintType)
struct FMcpVariantChannelInfo : public FCosmeticVariantInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FGameplayTagContainer OwnedVariantTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UFortItemDefinition* ItemVariantIsUsedFor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString CustomData;
};

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreviewElement
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FMcpVariantChannelInfo> VariantOptions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UFortAccountItemDefinition* Item;
};

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreview
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText UnlockCondition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PreviewTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FMcpVariantChannelInfo> VariantOptions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FFortCosmeticVariantPreviewElement> AdditionalItems;
};

UCLASS(DefaultToInstanced, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticVariant : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag VariantChannelTag;

	UPROPERTY(EditAnywhere)
		FText VariantChannelName;

	UPROPERTY(EditAnywhere)
		FGameplayTag ActiveVariantTag;
};

UCLASS(DefaultToInstanced, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticVariantBackedByArray : public UFortCosmeticVariant
{
	GENERATED_BODY()
};

UCLASS()
class UFortCosmeticMaterialVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariantDef> MaterialOptions;
};

UCLASS()
class UFortCosmeticCharacterPartVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FPartVariantDef> PartOptions;
};


UCLASS()
class UFortVariantTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EItemProfileType ProfileType;

	UPROPERTY(EditAnywhere)
	UFortItemDefinition* cosmetic_item;

	UPROPERTY(EditAnywhere)
	FGameplayTag VariantChanelTag; 

	UPROPERTY(EditAnywhere)
	FGameplayTag VariantNameTag; 

	UPROPERTY(EditAnywhere)
	TArray<FCosmeticVariantInfo> VariantPreviewOverrides;

	UPROPERTY(EditAnywhere)
	bool bAutoEquipVariant;

	UPROPERTY(EditAnywhere)
	bool bMarkItemUnseen; 

	UPROPERTY(EditAnywhere)
	bool bCreateGiftbox; 

	UPROPERTY(EditAnywhere)
	FString CustomGiftbox; 

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("CosmeticVariantToken", GetFName());
	}
};



