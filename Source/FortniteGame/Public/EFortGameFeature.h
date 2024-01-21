#pragma once
#include "CoreMinimal.h"
#include "EFortGameFeature.generated.h"

UENUM(BlueprintType)
enum class EFortGameFeature : uint8 {
    EarlyStartup,
    DedicatedServer,
    KairosInitial,
    KairosCapture,
    WorldAR,
    Frontend,
    GameplayAthena,
    GameplayCampaign,
    Invalid,
    Count = 0x8,
};

