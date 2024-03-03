#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEndOfMatchReason.h"
#include "FortPlayerDeathReport.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaGameOverDisplay.generated.h"

class ABattleMapPawnLive;
class UCommonButton;
class UEliminatedOverlay;
class UFortMatchStatsScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGameOverDisplay : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMatchStatsScreen> MatchStatsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_ReturnToLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_NextTeammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_PreviousTeammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_ReportPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_ToggleBattleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Input_ForceStartPostGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEliminatedOverlay* EliminatedOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Highlights;
    
public:
    UAthenaGameOverDisplay();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWinningScoreDetermined(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void OnWinnerAnnounced(const FString& Winner);
    
    UFUNCTION(BlueprintCallable)
    void OnViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleFullscreenMap(bool bFullscreenMapVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnSpectatorStreamingChanged(bool bSpectatorStreaming);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialActorListChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRessurectingNowDelegate(bool bRessurectingNow);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerOrTeamWon();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLost(EEndOfMatchReason LostReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaceChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPawnDied(const FFortPlayerDeathReport& DeathReport);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKillFeedUpdated();
    
    UFUNCTION(BlueprintCallable)
    void InGameMatchmakingComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HighlightCountChanged(int32 HighlightCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggledBattleMapLive(ABattleMapPawnLive* NewSpectatorPawn);
    
};

