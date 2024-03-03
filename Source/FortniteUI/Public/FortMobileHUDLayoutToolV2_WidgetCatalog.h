#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMobileHUDLayoutToolV2_WidgetCatalog.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonTextBlock;
class UFortDynamicEntryBox;
class UFortMobileHUDWidgetRegistry;
class UHUDLayoutToolV2_Button;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDLayoutToolV2_WidgetCatalog : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetRegistry* HUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanelOpacityWhenDragedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LayoutIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_DisplayButtonPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_DisplayWidgetPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_ButtonPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_WidgetPreviews;
    
public:
    UFortMobileHUDLayoutToolV2_WidgetCatalog();
};

