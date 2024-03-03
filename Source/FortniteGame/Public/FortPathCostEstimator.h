#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPathCostEstimator.generated.h"

class AActor;
class AFortNavigationGraph;

UCLASS(Blueprintable)
class UFortPathCostEstimator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortNavigationGraph* NavGraph;
    
public:
    UFortPathCostEstimator();
};

