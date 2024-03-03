#pragma once
#include "CoreMinimal.h"
#include "RewardBadgesProgression.generated.h"

class UFortBadgeItemDefinition;

USTRUCT(BlueprintType)
struct FRewardBadgesProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortBadgeItemDefinition*> RewardBadges;
    
    FORTNITEGAME_API FRewardBadgesProgression();
};

