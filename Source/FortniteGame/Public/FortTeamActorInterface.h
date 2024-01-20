#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FortTeamActorInterface.generated.h"

UINTERFACE()
class UFortTeamActorInterface : public UGenericTeamAgentInterface {
    GENERATED_BODY()
};

class IFortTeamActorInterface : public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual uint8 GetTeam() const PURE_VIRTUAL(GetTeam, return 0;);
    
};

