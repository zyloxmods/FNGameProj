// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "EItemProfileType.h"
#include "FortVariantTokenType.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortVariantTokenType : public UFortAccountItemDefinition
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
	bool bAutoEquipVariant;

	UPROPERTY(EditAnywhere)
	bool bMarkUnseen;

	UPROPERTY(EditAnywhere)
	bool bCreateGiftbox;

	UPROPERTY(EditAnywhere)
	FString CustomGiftbox;

	struct FGameplayTag GetVariantNameTag();
	struct FGameplayTag GetVariantChannelTag();
	class UFortItemDefinition* GetCosmeticItem();
};