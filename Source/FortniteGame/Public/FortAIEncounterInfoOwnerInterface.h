#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAIEncounterInfoOwnerInterface.generated.h"

class UFortAIEncounterInfo;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortAIEncounterInfoOwnerInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAIEncounterInfoOwnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UFortAIEncounterInfo* GetEncounterInfo() const PURE_VIRTUAL(GetEncounterInfo, return NULL;);
    
};

