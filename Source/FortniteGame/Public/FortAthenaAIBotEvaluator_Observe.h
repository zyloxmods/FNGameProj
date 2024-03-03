#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Observe.generated.h"

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AggressivenessName;
    
public:
    UFortAthenaAIBotEvaluator_Observe();
};

