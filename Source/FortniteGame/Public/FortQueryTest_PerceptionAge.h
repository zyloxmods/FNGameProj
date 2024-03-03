#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ECorePerceptionTypes.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_PerceptionAge.generated.h"

class UAISense;

UCLASS(Blueprintable)
class UFortQueryTest_PerceptionAge : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECorePerceptionTypes::Type> Sense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> SenseClass;
    
    UFortQueryTest_PerceptionAge();
};

