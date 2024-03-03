#pragma once
#include "CoreMinimal.h"
#include "EFortGameFeature.generated.h"

UENUM(BlueprintType)
enum class EFortGameFeature : uint8 {
    EarlyStartup,
    DedicatedServer,
    KairosInitial,
    KairosCapture,
    KairosLoadElectraPlayer,
    DanceRoyale,
    Frontend,
    GameplayAthena,
    GameplayCampaignTutorial,
    GameplayCampaign,
    GameplayCreative,
    Invalid,
    Count = 0xB,
};

