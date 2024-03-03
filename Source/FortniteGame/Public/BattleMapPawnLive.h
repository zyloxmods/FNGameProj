#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FortReplaySpectatorPawnBase.h"
#include "Templates/SubclassOf.h"
#include "BattleMapPawnLive.generated.h"

class ABattleMapEdge;
class ABattleMapNode;
class ABattleMapTimeIndicator;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABattleMapPawnLive : public AFortReplaySpectatorPawnBase {
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
    
public:
    ABattleMapPawnLive();
    UFUNCTION(BlueprintCallable, Exec)
    void ZoomIn(const float Val);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTimeIndicatorUpdatedSegment(const ABattleMapNode* StartNode, const ABattleMapEdge* Edge, const ABattleMapNode* EndNode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HandleClickReleased(FKey ButtonReleased);
    
    UFUNCTION(BlueprintCallable)
    bool HandleClickPressed(FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetTimelineMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsOnTimelineMode() const;
    
};

