#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntryBase.h"
#include "FortSettingsListEntry_Setting.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntry_Setting : public UFortSettingsListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingName;
    
public:
    UFortSettingsListEntry_Setting();
};

