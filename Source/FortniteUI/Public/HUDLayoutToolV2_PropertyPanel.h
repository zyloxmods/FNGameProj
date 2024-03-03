#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_PropertyPanel.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonTextBlock;
class UFortMobileHUDElementProxy;
class UFortMobileHUDWidgetCustomPropertySettingRegistry;
class UFortMobileHUDWidgetRegistry;
class UFortSetting;
class UFortSettingsListView;
class UHUDLayoutToolV2_Button;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_PropertyPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDElementProxy* WidgetProxyToEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSetting*> VisibleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetCustomPropertySettingRegistry* HUDWidgetCustomPropertySettingRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetRegistry* HUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_PropertiesAndMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SelectWidgetMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_PropertiesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_EditLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_RevertHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_DeleteHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsListView* ListView_Settings;
    
public:
    UHUDLayoutToolV2_PropertyPanel();
};

