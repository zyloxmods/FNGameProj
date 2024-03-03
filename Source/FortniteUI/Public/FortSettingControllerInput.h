#pragma once
#include "CoreMinimal.h"
#include "FortSettingValue.h"
#include "FortSettingControllerInput.generated.h"

UCLASS(Blueprintable)
class UFortSettingControllerInput : public UFortSettingValue {
    GENERATED_BODY()
public:
    UFortSettingControllerInput();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKeyIndex() const;
    
};

