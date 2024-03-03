#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TierTags.generated.h"

USTRUCT(BlueprintType)
struct FTierTags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagForTier[6];
    
    FORTNITEGAME_API FTierTags();
};

