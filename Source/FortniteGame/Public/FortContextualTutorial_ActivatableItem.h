#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_ActivatableItem.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_ActivatableItem : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_ActivatableItem();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};

