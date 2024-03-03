#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortActivityDetailsSettingsWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortSettingValueDiscreteDynamic_Bool;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsSettingsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ToggleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingValueDiscreteDynamic_Bool* Setting;
    
public:
    UFortActivityDetailsSettingsWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingChanged(bool NewValue);
    
};

