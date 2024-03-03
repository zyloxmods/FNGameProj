#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortStormRotator.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortStormRotator : public AActor {
    GENERATED_BODY()
public:
    AFortStormRotator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStormEffectsEnabled(bool bEnabled);
    
};

