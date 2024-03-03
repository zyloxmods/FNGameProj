#pragma once
#include "CoreMinimal.h"
#include "HoverDronePawn.h"
#include "Templates/SubclassOf.h"
#include "BattleMapPawnReplay.generated.h"

class ABattleMapEdge;
class ABattleMapNode;
class ABattleMapTimeIndicator;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABattleMapPawnReplay : public AHoverDronePawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> GroundMoveNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> AirMoveNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> GotKillNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> ZoneNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> TeamFlightNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapTimeIndicator> TimeIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SelectedNodeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HoveredNodeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ScrubbingToSound;
    
public:
    ABattleMapPawnReplay();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTimeIndicatorUpdatedSegment(const ABattleMapNode* StartNode, const ABattleMapEdge* Edge, const ABattleMapNode* EndNode);
    
    UFUNCTION(BlueprintCallable)
    void HandleRightMouseUp();
    
    UFUNCTION(BlueprintCallable)
    void HandleRightMouseDown();
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayEventRemoving(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HandleRefreshingReplayEvents();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaybackTimeChanged(float NowTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftMouseUp();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftMouseDown();
    
    UFUNCTION(BlueprintCallable)
    void HandleGotoTimeComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void HandleCompletedAllRequested();
    
    UFUNCTION(BlueprintCallable)
    void HandleCameraOutsideSafeZoneChanged(bool bCameraOutsideSafeZone);
    
    UFUNCTION(BlueprintCallable)
    void HandleBattleMapShowTimeIndicatorChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleBattleMapShowNearbyChestsChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleBattleMapShowAllSquadMembersChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleBattleMapAutomaticCameraPlacementChanged(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    bool BP_SetTimelineMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsOnTimelineMode() const;
    
};

