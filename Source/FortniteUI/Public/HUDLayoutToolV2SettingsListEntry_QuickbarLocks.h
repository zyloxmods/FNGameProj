#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSettingsListEntry_Setting.h"
#include "HUDLayoutToolV2SettingsListEntry_QuickbarLocks.generated.h"

class UFortDynamicEntryBox;
class UFortSettingValueDiscreteDynamic_QuickbarLocks;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2SettingsListEntry_QuickbarLocks : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingValueDiscreteDynamic_QuickbarLocks* QuickbarLocksSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LockEnabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LockDisabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_SlotLocks;
    
public:
    UHUDLayoutToolV2SettingsListEntry_QuickbarLocks();
};

