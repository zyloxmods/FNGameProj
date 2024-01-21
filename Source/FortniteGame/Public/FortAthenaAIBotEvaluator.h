#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIEvaluator.h"
#include "FortAthenaAIBotEvaluator.generated.h"

class AFortAthenaAIBotController;
class UBehaviorTreeComponent;

UCLASS(Abstract, Blueprintable)
class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* CachedBotController;
    
public:
    UFortAthenaAIBotEvaluator();
};

