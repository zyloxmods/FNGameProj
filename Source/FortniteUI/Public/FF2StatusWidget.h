#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "FF2StatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFF2StatusWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UFF2StatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealth(float CurrentHealth, float MaxHealth);
    
};

