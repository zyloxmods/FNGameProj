#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_MutatorBaseQueryResults.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UFortQueryGenerator_MutatorBaseQueryResults();
};

