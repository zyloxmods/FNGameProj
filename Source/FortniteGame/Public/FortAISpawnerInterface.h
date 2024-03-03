#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAISpawnerInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortAISpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAISpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnReceiveSpawnGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsReadyToReceiveNewSpawnGroup();
    
};

