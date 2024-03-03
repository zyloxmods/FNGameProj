#pragma once
#include "CoreMinimal.h"
#include "FortHiddenRewardQuantityPair.h"
#include "FortItemQuantityPair.h"
#include "FortSelectableRewardOption.h"
#include "FortRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSelectableRewardOption> SelectableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> StandardRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortHiddenRewardQuantityPair> HiddenRewards;
    
    FFortRewardInfo();
};

