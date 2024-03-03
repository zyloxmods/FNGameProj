#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortFishingInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortFishingInterface : public UInterface {
    GENERATED_BODY()
};

class IFortFishingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion);
    
};

