#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastFollowedPlayerInfoBase.generated.h"

class AActor;
class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastFollowedPlayerInfoBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaBroadcastFollowedPlayerInfoBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleStateChanged(UAthenaRemotePlayerViewData* PlayerData, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bPipModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerDataChanged(UAthenaRemotePlayerViewData* InFollowedPlayerData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEliminatedStateChanged(UAthenaRemotePlayerViewData* PlayerData, bool bIsEliminated);
    
};

