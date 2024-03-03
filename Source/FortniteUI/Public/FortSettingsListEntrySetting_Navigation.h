#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntry_Setting.h"
#include "FortSettingsListEntrySetting_Navigation.generated.h"

class UCommonButton;
class UFortSettingCollectionPage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntrySetting_Navigation : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingCollectionPage* CollectionSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Navigate;
    
public:
    UFortSettingsListEntrySetting_Navigation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
};

