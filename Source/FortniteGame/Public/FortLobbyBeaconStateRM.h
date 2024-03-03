#pragma once
#include "CoreMinimal.h"
#include "FortLobbyBeaconState.h"
#include "FortLobbyBeaconStateRM.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortLobbyBeaconStateRM : public AFortLobbyBeaconState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LobbyTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 LobbyTimeRemaining;
    
public:
    AFortLobbyBeaconStateRM();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyTimeRemaining();
    
};

