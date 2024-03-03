#pragma once
#include "CoreMinimal.h"
#include "FortSettingValue.h"
#include "FortSettingValueDiscrete.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortSettingValueDiscrete : public UFortSettingValue {
    GENERATED_BODY()
public:
    UFortSettingValueDiscrete();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetDiscreteOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscreteOptionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscreteOptionDefaultIndex() const;
    
};

