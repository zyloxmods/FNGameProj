#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "EDistanceMode.h"
#include "FortQueryTest_GoalBase.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_GoalDistance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDistanceMode DistanceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
public:
    UFortQueryTest_GoalDistance();
};

