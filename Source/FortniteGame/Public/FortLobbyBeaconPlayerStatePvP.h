#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconPlayerState.h"
#include "FortLobbyBeaconPlayerStatePvP.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortLobbyBeaconPlayerStatePvP : public AFortLobbyBeaconPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bReadiedUp, meta=(AllowPrivateAccess=true))
    uint8 bReadiedUp: 1;
    
public:
    AFortLobbyBeaconPlayerStatePvP();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bReadiedUp();
    
};

