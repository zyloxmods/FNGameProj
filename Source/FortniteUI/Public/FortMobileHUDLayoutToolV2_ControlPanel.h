#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMobileHUDLayoutToolV2_ControlPanel.generated.h"

class UCommonActivatableWidgetSwitcher;
class UHUDLayoutToolV2_Button;
class UHUDLayoutToolV2_ContextSelector;
class UHUDLayoutToolV2_GridSnap;
class UHUDLayoutToolV2_PropertyPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDLayoutToolV2_ControlPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanelOpacityWhenDragedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_RevertAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_OpenProfileSelectionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_SwitchContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_SwitchProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_GridSnap* GridSnapOption_Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_ContextSelector* ContextSelector_ContextLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_PropertyPanel* PropertyPanel_WidgetProperties;
    
public:
    UFortMobileHUDLayoutToolV2_ControlPanel();
};

