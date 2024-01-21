#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconState.h"
#include "FortLobbyBeaconStatePvP.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortLobbyBeaconStatePvP : public AFortLobbyBeaconState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PvPLobbyTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PvPLobbyTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 PvPLobbyTimeRemaining;
    
public:
    AFortLobbyBeaconStatePvP();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PvPLobbyTimeRemaining();
    
};

