#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_NavGraphDistance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UFortQueryTest_NavGraphDistance();
};

