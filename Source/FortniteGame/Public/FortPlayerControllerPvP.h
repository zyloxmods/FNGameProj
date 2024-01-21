#pragma once
#include "CoreMinimal.h"
#include "EFortPvPGameResult.h"
#include "FortPlayerControllerZone.h"
#include "FortPlayerControllerPvP.generated.h"

class ABuildingFOBConfigActor;
class AFortPlayerStateZone;
class UFortFOBCoreDecoItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerPvP : public AFortPlayerControllerZone {
    GENERATED_BODY()
public:
    AFortPlayerControllerPvP();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptSelectFOBCore(ABuildingFOBConfigActor* FOBToSelectOn, UFortFOBCoreDecoItemDefinition* DefToSelect);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowGameOverWidget(EFortPvPGameResult GameResult);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReceiveKillNotification(AFortPlayerStateZone* Killer, AFortPlayerStateZone* Killed);
    
};

