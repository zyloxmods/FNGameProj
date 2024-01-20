#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconHostPvE.h"
#include "FortLobbyBeaconHostOutpost.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortLobbyBeaconHostOutpost : public AFortLobbyBeaconHostPvE {
    GENERATED_BODY()
public:
    AFortLobbyBeaconHostOutpost();
};

