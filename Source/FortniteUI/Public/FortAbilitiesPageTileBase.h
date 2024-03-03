#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortAbilitiesPageTileBase.generated.h"

class UCommonWidgetSwitcher;
class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortAbilitiesPageTileBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* SwitcherAbilityBindingSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybindCombo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybindCombo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuickBarSlot;
    
public:
    UFortAbilitiesPageTileBase();
    UFUNCTION(BlueprintCallable)
    void UpdateGamepadKeyBindingText();
    
};

