#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarisResponse.h"
#include "SolarisPrototype.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API ASolarisPrototype : public AActor {
    GENERATED_BODY()
public:
    ASolarisPrototype();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSolarisResponse CheckEndConditions();
    
};

