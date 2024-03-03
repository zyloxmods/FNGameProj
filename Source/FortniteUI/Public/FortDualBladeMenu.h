#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UIActionTag.h"
#include "Engine/DataTable.h"
#include "FortDualBladeMenu.generated.h"

class UCommonButton;
class UFortBladeMenu_MainMenu;
class UFortBladeMenu_SocialPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDualBladeMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag OpenSocialPanelActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag OpenMainMenuActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag SwitchProfileActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringSocialPanelInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringMainMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SwitchProfileInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBladeMenu_SocialPanel* BladeMenu_SocialPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBladeMenu_MainMenu* BladeMenu_MainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_BackBoard;
    
public:
    UFortDualBladeMenu();
private:
    UFUNCTION(BlueprintCallable)
    void HandleAccountPickerResult(int32 ControllerId, bool bUserSwitched);
    
};

