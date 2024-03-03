#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Skydiving.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_Skydiving : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Skydiving();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydiving();
    
};

