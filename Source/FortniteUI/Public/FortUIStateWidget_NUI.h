#pragma once
#include "CoreMinimal.h"
#include "FortClientEventInterface.h"
#include "ContentPushState.h"
#include "EFortUIState.h"
#include "FortActivatablePanel.h"
#include "FortUIStateWidget_NUI.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortUIStateWidget_NUI : public UFortActivatablePanel, public IFortClientEventInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FContentPushState> StackStates;
    
public:
    UFortUIStateWidget_NUI();
    UFUNCTION(BlueprintCallable)
    void SetSocialButtonEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOpenSocialMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PushContentWidgetInternal(UWidget* Widget, FContentPushState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushContentWidgetAdvanced(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    void PushContentWidget(UWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* PopContentWidgetInternal(FContentPushState State);
    
public:
    UFUNCTION(BlueprintCallable)
    UWidget* PopContentWidget();
    
    UFUNCTION(BlueprintCallable)
    void PopAllContentWidgets();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSocialButtonEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingScreenVisibilityChanged(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDScaleChanged(float HUDScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitState(EFortUIState NextUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterState(EFortUIState PreviousUIState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutoHideBuildingMaterialsChanged(bool AutoHide);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetTopBarWidget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
    
    
    // Fix for true pure virtual functions not being implemented
};

