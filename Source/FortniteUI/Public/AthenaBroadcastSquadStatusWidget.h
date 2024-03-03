#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaEventMatchSquadWidgetBase.h"
#include "AthenaBroadcastSquadStatusWidget.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UAthenaRemoteSquadViewData;
class UFortMinigameTeamIdentification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastSquadStatusWidget : public UAthenaEventMatchSquadWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl FollowedPlayerUID;
    
public:
    UAthenaBroadcastSquadStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bPipModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinigameTeamIdChanged(const UFortMinigameTeamIdentification* MinigameTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadIdChanged(UAthenaRemoteSquadViewData* InSquadData, uint8 SquadId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorController, AFortPlayerState* NewFollowedPlayer);
    
};

