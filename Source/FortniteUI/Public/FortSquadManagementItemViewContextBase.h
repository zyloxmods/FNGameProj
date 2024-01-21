#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortItemViewContextInterface.h"
#include "FortSquadManagementItemViewContextBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortSquadManagementItemViewContextBase : public UObject, public IFortItemViewContextInterface {
    GENERATED_BODY()
public:
    UFortSquadManagementItemViewContextBase();
    
    // Fix for true pure virtual functions not being implemented
};

