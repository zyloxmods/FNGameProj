#pragma once
#include "CoreMinimal.h"
#include "ArsenicCoreWidgetBase.h"
#include "ArsenicCoreHumansAndGhostsLeftBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UArsenicCoreHumansAndGhostsLeftBase : public UArsenicCoreWidgetBase {
    GENERATED_BODY()
public:
    UArsenicCoreHumansAndGhostsLeftBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHumansLeftText(const FText& HumansText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGhostsLeftText(const FText& GhostsText);
    
};

