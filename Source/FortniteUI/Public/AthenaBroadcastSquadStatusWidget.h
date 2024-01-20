#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaEventMatchSquadWidgetBase.h"
#include "AthenaBroadcastSquadStatusWidget.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;

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
    void OnFollowedPlayerChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorController, AFortPlayerState* NewFollowedPlayer);
    
};

