#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "FortTeamActorInterface.h"
#include "FortDisconnectedAIController.generated.h"

UCLASS(Blueprintable)
class AFortDisconnectedAIController : public AAIController, public IFortTeamActorInterface {
    GENERATED_BODY()
public:
    AFortDisconnectedAIController();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

