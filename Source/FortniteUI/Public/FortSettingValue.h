#pragma once
#include "CoreMinimal.h"
#include "FortSetting.h"
#include "FortSettingValue.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortSettingValue : public UFortSetting {
    GENERATED_BODY()
public:
    UFortSettingValue();
};

