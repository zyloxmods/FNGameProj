#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Consumable.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_Consumable : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Consumable();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};

