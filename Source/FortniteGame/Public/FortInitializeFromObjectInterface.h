#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortInitializeFromObjectInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortInitializeFromObjectInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortInitializeFromObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitFromObject(UObject* InitObject);
    
};

