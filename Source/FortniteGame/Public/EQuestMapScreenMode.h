#pragma once
#include "CoreMinimal.h"
#include "EQuestMapScreenMode.generated.h"

UENUM(BlueprintType)
enum class EQuestMapScreenMode : uint8 {
    Invalid,
    MainCampaign,
    Event,
};

