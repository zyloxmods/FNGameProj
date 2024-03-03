#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortBluGloCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortBluGloCounter : public UFortUserWidget {
    GENERATED_BODY()
public:
    UFortBluGloCounter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBluGloQuantityChanged(int32 Quantity);
    
};

