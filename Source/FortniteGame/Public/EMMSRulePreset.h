#pragma once
#include "CoreMinimal.h"
#include "EMMSRulePreset.generated.h"

UENUM(BlueprintType)
enum class EMMSRulePreset : uint8 {
    RespectParties,
    KeepFull,
    Off,
};

