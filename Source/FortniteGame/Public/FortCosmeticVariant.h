#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "FortCosmeticVariant.generated.h"

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