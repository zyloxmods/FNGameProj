#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EWardAffectType.h"
#include "FortQueryTest_IsCloseToPatrolWard.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWardAffectType WardEffectTypeFilter;
    
    UFortQueryTest_IsCloseToPatrolWard();
};

