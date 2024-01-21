#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortInitializationInterface.generated.h"

UINTERFACE(MinimalAPI)
class UFortInitializationInterface : public UInterface {
    GENERATED_BODY()
};

class IFortInitializationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void WorldReady() PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    virtual bool NeedsWorldReady() const PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    virtual void MatchStarted() PURE_VIRTUAL(MatchStarted,);
    
};

