#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortSelectableRewardOption.generated.h"

USTRUCT(BlueprintType)
struct FFortSelectableRewardOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Rewards;
    
    FORTNITEGAME_API FFortSelectableRewardOption();
};

