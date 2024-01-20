#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaSpectatorHUDBase.h"
#include "AthenaBroadcastHUDBase.generated.h"

class AFortGameState;
class UAthenaSpectatorHUDControlsBase;
class UCommonWidgetSwitcher;
class UFortPlaylistAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastHUDBase : public UAthenaSpectatorHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorHUDControlsBase* BroadcastHUDControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* EventMatchInfoSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMatchStatusActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleSquadStatusActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleRemainingPlayersActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleActiveGridScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleEliminatedGridScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMatchStatusScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleScoreboardScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleKillFeedActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleActionFeedScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleGotoTimeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleAllPlayersGridActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TogglePipModeActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleFollowedPlayerInfoActionRowHandle;
    
public:
    UAthenaBroadcastHUDBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleSquadStatusActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleScoreboardScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRemainingPlayersActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTogglePipModeActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleMatchStatusScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleMatchStatusActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleKillFeedActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleGoToTimeScreen(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleFollowedPlayerInfoActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleEliminatedGridScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleAllPlayersGridActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleActiveGridScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleActionFeedScreenActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistDataChanged(const UFortPlaylistAthena* PlaylistData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewGameState(const AFortGameState* NewGameState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* NewGameState);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistChanged();
    
};

