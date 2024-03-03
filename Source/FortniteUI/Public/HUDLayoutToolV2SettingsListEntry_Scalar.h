#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntrySetting_Scalar.h"
#include "HUDLayoutToolV2SettingsListEntry_Scalar.generated.h"

class UHUDLayoutToolV2_Button;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2SettingsListEntry_Scalar : public UFortSettingsListEntrySetting_Scalar {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_DecreaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_IncreaseValue;
    
public:
    UHUDLayoutToolV2SettingsListEntry_Scalar();
};

