#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortPermaniteStructureInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortPermaniteStructureInterface : public UInterface {
    GENERATED_BODY()
};

class IFortPermaniteStructureInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoundariesChanged(int32 MinLevel, int32 MaxLevel, int32 CurrentLevel);
    
};

