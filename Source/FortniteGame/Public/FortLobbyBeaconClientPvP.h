#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconClient.h"
#include "FortLobbyBeaconClientPvP.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortLobbyBeaconClientPvP : public AFortLobbyBeaconClient {
    GENERATED_BODY()
public:
    AFortLobbyBeaconClientPvP();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReadyUp();
    
};

