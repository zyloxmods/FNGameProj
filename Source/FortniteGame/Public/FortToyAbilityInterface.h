#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortToyAbilityInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortToyAbilityInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortToyAbilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* NotifyAbilityToSpawnToy(const FTransform& DesiredLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAbilityToReleaseToy();
    
};

