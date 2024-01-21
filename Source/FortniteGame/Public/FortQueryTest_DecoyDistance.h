#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_DecoyDistance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_DecoyDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
public:
    UFortQueryTest_DecoyDistance();
};

