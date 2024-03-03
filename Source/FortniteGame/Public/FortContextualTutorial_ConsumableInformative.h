#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_ConsumableInformative.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_ConsumableInformative : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_ConsumableInformative();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};

