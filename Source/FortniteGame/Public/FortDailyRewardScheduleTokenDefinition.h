#pragma once
#include "CoreMinimal.h"
#include "FortTokenType.h"
#include "FortDailyRewardScheduleTokenDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDailyRewardScheduleTokenDefinition : public UFortTokenType {
    GENERATED_BODY()
public:
    UFortDailyRewardScheduleTokenDefinition(const FObjectInitializer& ObjectInitializer);
};

