#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "FortSettingsRotator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsRotator : public UCommonRotator {
    GENERATED_BODY()
public:
    UFortSettingsRotator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
    
};

