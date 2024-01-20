#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MutatorContext.h"
#include "FortMutatorContext.generated.h"

UINTERFACE()
class UFortMutatorContext : public UInterface {
    GENERATED_BODY()
};

class IFortMutatorContext : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void GetMutatorContext(FMutatorContext& MutatorContext) const PURE_VIRTUAL(GetMutatorContext,);
    
};

