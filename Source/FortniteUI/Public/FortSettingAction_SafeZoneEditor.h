#pragma once
#include "CoreMinimal.h"
#include "FortSettingAction.h"
#include "FortSettingAction_SafeZoneEditor.generated.h"

class UFortSettingValueScalarDynamic_SafeZoneValue;

UCLASS(Blueprintable)
class UFortSettingAction_SafeZoneEditor : public UFortSettingAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingValueScalarDynamic_SafeZoneValue* SafeZoneValueSetting;
    
public:
    UFortSettingAction_SafeZoneEditor();
};

