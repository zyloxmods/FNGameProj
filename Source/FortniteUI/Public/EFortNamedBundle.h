#pragma once
#include "CoreMinimal.h"
#include "EFortNamedBundle.generated.h"

UENUM(BlueprintType)
enum class EFortNamedBundle : uint8 {
    Menu,
    MenuCampaign,
    MenuAthena,
    Zone,
    ZoneCampaign,
    ZoneAthena,
    Client,
    ClientCampaign,
    ClientAthena,
};

