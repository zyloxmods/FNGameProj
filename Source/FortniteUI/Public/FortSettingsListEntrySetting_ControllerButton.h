#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntry_Setting.h"
#include "Templates/SubclassOf.h"
#include "FortSettingsListEntrySetting_ControllerButton.generated.h"

class UCommonButton;
class UFortControllerActionsMenu;
class UFortKeybindWidget;
class UFortSettingControllerInput;
class UMenuAnchor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntrySetting_ControllerButton : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerActionsMenu> BindingMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingControllerInput* ControllerInputSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Key_ControllerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ControllerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_BindableActions;
    
public:
    UFortSettingsListEntrySetting_ControllerButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetPopupMenu();
    
};

