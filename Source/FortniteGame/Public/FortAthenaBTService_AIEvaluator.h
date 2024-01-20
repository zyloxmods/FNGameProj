#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaBTService_AIEvaluator.generated.h"

class UFortAthenaAIEvaluator;

UCLASS(Blueprintable)
class UFortAthenaBTService_AIEvaluator : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAIEvaluator> AIEvaluatorClass;
    
public:
    UFortAthenaBTService_AIEvaluator();
};

