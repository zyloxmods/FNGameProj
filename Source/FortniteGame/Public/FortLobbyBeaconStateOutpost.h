#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconStatePvE.h"
#include "FortLobbyBeaconStateOutpost.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortLobbyBeaconStateOutpost : public AFortLobbyBeaconStatePvE {
    GENERATED_BODY()
public:
    AFortLobbyBeaconStateOutpost();
};

