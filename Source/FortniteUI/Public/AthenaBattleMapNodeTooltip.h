#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonUserWidget.h"
#include "BattleMapHoveredReason.h"
#include "ESpectatorCameraType.h"
#include "AthenaBattleMapNodeTooltip.generated.h"

class ABattleMapNode;
class ABattleMapPawnLive;
class AFortPlayerControllerSpectating;
class UCommonTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaBattleMapNodeTooltip : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NodeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NodeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NodeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_Scrubbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_ScrubbingGamepad;
    
public:
    UAthenaBattleMapNodeTooltip();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReplayLevelStreamingChanged(const bool bStreaming);
    
    UFUNCTION()
    void HandleUnhoveredNode(const ABattleMapNode* Node, BattleMapHoveredReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggledBattleMapLive(ABattleMapPawnLive* BattleMapPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimelineModeChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType NewInputType);
    
    UFUNCTION()
    void HandleHoveredNode(const ABattleMapNode* Node, BattleMapHoveredReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
    
};

