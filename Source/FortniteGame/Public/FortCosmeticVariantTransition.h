#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCosmeticVariantTransition.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticVariantTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChannelWithin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantTo;
    
    FORTNITEGAME_API FFortCosmeticVariantTransition();
};

