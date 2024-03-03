#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Sound/SlateSound.h"
#include "CommonButtonClickedDelegate.h"
#include "CommonSelectedStateChangedDelegate.h"
#include "CommonUserWidget.h"
#include "ECommonInputMode.h"
#include "Templates/SubclassOf.h"
#include "CommonButton.generated.h"

class UCommonActionWidget;
class UCommonActivatablePanel;
class UCommonButtonStyle;
class UCommonTextStyle;
class UMaterialInstanceDynamic;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonButton : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound HoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyAlphaOnDisable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelectable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSelectUponReceivingFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInteractableWhenSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bToggleable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayInputActionWhenNotInteractable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideInputActionWithKeyboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUseFallbackDefaultInputAction: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPersistentBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode InputModeOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSelectedStateChanged OnSelectedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonUnhovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SingleMaterialStyleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle SelectedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle DisabledStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStopDoubleClickPropagation: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget;
    
public:
    UCommonButton();
protected:
    UFUNCTION(BlueprintCallable)
    void StopDoubleClickPropagation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow, UCommonActivatablePanel* OldPanel);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonButtonStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetIsToggleable(bool bInIsToggleable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectable(bool bInIsSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName InProgressMaterialParam);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentTextStyleChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionProgress(float HeldPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionComplete();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActionProgress(float HeldPercent);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActionComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTriggeringActionCommited(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonStyle* GetStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetSingleMaterialStyleMID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldSelectUponReceivingFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputAction(FDataTableRowHandle& InputActionRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UCommonTextStyle> GetCurrentTextStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetCurrentTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentCustomPadding(FMargin& OutCustomPadding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentButtonPadding(FMargin& OutButtonPadding) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableButtonWithReason(const FText& DisabledReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDoubleClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClicked();
    
};

