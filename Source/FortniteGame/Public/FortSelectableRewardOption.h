#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortSelectableRewardOption.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortSelectableRewardOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Rewards;
    
    FFortSelectableRewardOption();
};

