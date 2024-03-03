#pragma once
#include "CoreMinimal.h"
#include "FortSettingDetailExtension.h"
#include "FortSettingsDeadzoneExtension.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsDeadzoneExtension : public UFortSettingDetailExtension {
    GENERATED_BODY()
public:
    UFortSettingsDeadzoneExtension();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLiveAnalogValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeadZoneAnalogValue() const;
    
};

