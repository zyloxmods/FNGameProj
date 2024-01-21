#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxRespawnCounterWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWaxRespawnCounterWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UWaxRespawnCounterWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 NewCount);
    
};

