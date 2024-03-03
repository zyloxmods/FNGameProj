#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconStatePvE.h"
#include "FortLobbyBeaconStateOutpost.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortLobbyBeaconStateOutpost : public AFortLobbyBeaconStatePvE {
    GENERATED_BODY()
public:
    AFortLobbyBeaconStateOutpost();
};

