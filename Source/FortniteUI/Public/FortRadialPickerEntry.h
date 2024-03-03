#pragma once
#include "CoreMinimal.h"
#include "FortRadialSlot.h"
#include "FortRadialPickerEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRadialPickerEntry : public UFortRadialSlot {
    GENERATED_BODY()
public:
    UFortRadialPickerEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectionColor(bool bIsSelected);
    
};

