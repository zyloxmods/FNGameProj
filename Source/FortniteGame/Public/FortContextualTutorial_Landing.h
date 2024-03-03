#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Landing.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_Landing : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Landing();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForCompletion();
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLanded(const FHitResult& Hit);
    
};

