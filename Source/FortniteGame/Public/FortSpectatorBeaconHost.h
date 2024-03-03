#pragma once
#include "CoreMinimal.h"
#include "SpectatorBeaconHost.h"
#include "FortSpectatorBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortSpectatorBeaconHost : public ASpectatorBeaconHost {
    GENERATED_BODY()
public:
    AFortSpectatorBeaconHost();
};

