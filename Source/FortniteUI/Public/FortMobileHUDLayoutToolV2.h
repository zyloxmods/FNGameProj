#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDLayoutProfile.h"
#include "HUDLayoutToolV2_PopupContent.h"
#include "HUDLayoutToolV2_ToastNotificationContent.h"
#include "Templates/SubclassOf.h"
#include "FortMobileHUDLayoutToolV2.generated.h"

class UCanvasPanel;
class UCommonTextBlock;
class UFortMobileHUDElementProxy;
class UFortMobileHUDLayer;
class UFortMobileHUDLayoutToolV2_ControlPanel;
class UFortMobileHUDLayoutToolV2_WidgetCatalog;
class UFortMobileHUDWidgetRegistry;
class UHUDLayoutToolV2_Button;
class UHUDLayoutToolV2_Grid;
class UHUDLayoutToolV2_LinkAcrossPanel;
class UHUDLayoutToolV2_Popup;
class UHUDLayoutToolV2_ProfileSelectionPanel;
class UHUDLayoutToolV2_Toaster;
class UHUDLayoutToolV2_TutorialPopup;
class UHUDLayoutToolV2_VirtualCanvas;
class UOverlay;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDLayoutToolV2 : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapPercentageToColapsePanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonEditableHUDWidgetOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanelOpacityWhenDragedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnOpenSubPanelAnimPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetRegistry* HUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDLayoutToolV2_Popup> HudLayoutToolPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDLayoutToolV2_TutorialPopup> HudLayoutToolTutorialPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent ExitHudLayoutToolPopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent DeleteOutOfBoundsHUDProxiesPopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent RevertAllProxiesPopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent SwitchHUDProfileSavePopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent SwitchHUDProfileDeletePopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent CreateNewCustomLayoutPopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_PopupContent CustomLayoutSlotsFullPopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_ToastNotificationContent SuccessToasterContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_ToastNotificationContent FailureToasterContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_ToastNotificationContent LocalFailureToasterContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDLayoutToolV2_ToastNotificationContent CloudFailureToasterContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnchorsCustomPropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleClickDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortMobileHUDLayoutProfile LayoutProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDElementProxy* SelectedWidgetProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDLayoutToolV2_Popup*> QueuedPopups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_VirtualCanvas* VirtualCanvas_WidgetLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMobileHUDLayer* HUDLayer_HUDWidgetProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_VirtualCanvasWorkspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Grid* Grid_Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_ResetVirtualCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_ToggleControlPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_ToggleWidgetCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_ControlsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_ControlPanelContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMobileHUDLayoutToolV2_ControlPanel* ControlPanel_Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_ProfileSelectionPanel* ProfileSelectionPanel_Profiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMobileHUDLayoutToolV2_WidgetCatalog* WidgetCatalog_Catalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_LinkAcrossPanel* LinkAcrossPanel_LinkManagementWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_ControlPanelToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_ToggleWidgetCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Toaster* Toaster_Notifications;
    
public:
    UFortMobileHUDLayoutToolV2();
};

