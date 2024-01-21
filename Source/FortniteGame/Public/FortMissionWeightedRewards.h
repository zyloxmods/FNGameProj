#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortMissionWeightedReward.h"
#include "FortMissionWeightedRewards.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMissionWeightedRewards : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionWeightedReward> Rewards;
    
    UFortMissionWeightedRewards();
};

