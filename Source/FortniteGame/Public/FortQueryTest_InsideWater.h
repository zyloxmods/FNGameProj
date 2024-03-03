#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortQueryTest_InsideWater.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_InsideWater : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestRadius;
    
    UFortQueryTest_InsideWater();
};

