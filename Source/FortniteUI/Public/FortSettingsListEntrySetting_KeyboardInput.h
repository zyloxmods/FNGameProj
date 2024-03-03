#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntry_Setting.h"
#include "Templates/SubclassOf.h"
#include "FortSettingsListEntrySetting_KeyboardInput.generated.h"

class UCommonButton;
class UFortSettingKeyboardInput;
class UFortSettingsPressAnyKey;
class UFortSettingsPreviewActionUnbind;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntrySetting_KeyboardInput : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingKeyboardInput* KeyboardInputSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSettingsPressAnyKey> PressAnyKeyPanelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSettingsPreviewActionUnbind> PreviewActionUnbindClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PrimaryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SecondaryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Clear;
    
public:
    UFortSettingsListEntrySetting_KeyboardInput();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateKeyText(const FText& PrimaryKeyText, const FText& SecondaryKeyText);
    
};

