#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_NearHideableObject.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_NearHideableObject : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_NearHideableObject();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
};

