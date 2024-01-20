#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortMissionWeightedReward.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionWeightedReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LootIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FFortMissionWeightedReward();
};

