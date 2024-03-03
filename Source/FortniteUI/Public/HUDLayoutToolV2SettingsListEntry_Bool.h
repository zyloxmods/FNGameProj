#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntry_Setting.h"
#include "HUDLayoutToolV2SettingsListEntry_Bool.generated.h"

class UFortSettingValueDiscrete;
class UHUDLayoutToolV2_Button;
class UPanelWidget;
class UPaperSprite;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2SettingsListEntry_Bool : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* CheckMarkSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingValueDiscrete* BoolSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_ToggleBool;
    
public:
    UHUDLayoutToolV2SettingsListEntry_Bool();
};

