#pragma once
#include "CoreMinimal.h"
#include "FortItemPickerBase.h"
#include "FortTransformKeyPicker.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTransformKeyPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    UFortTransformKeyPicker();
    UFUNCTION(BlueprintCallable)
    void RebuildTransformKeys(const TArray<UObject*>& InDataProvider);
    
};

