#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESpectatorCameraType.h"
#include "FortActivatablePanel.h"
#include "AthenaBattleMapTimelineWidget.generated.h"

class ABattleMapNode;
class ABattleMapPawnLive;
class AFortPlayerControllerSpectating;
class UCommonButton;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UAthenaBattleMapTimelineWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardButtonPositionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardButtonPositionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ForwardDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackwardDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StopDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ScrubToDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ExitBattleMapDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoomInDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoomOutDataTableRow;
    
public:
    UAthenaBattleMapTimelineWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnReplayLevelStreamingChanged(const bool bStreaming);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomOutPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomOutHeld(float HeldPercent);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomInPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomInHeld(float HeldPercent);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggledBattleMapLive(ABattleMapPawnLive* BattleMapPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineStopPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineScrubToPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineModeChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineForwardPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineBackwardPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectedNode(const ABattleMapNode* InSelectedNode);
    
    UFUNCTION(BlueprintCallable)
    void HandleExitBattleMapPressed(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
    
};

