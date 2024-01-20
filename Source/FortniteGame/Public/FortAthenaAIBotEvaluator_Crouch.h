#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Crouch.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Crouch : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrouchWhenServiceIsActive;
    
public:
    UFortAthenaAIBotEvaluator_Crouch();
};

