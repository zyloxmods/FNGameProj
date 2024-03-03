#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_MutatorActorQueryResults.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UFortQueryGenerator_MutatorActorQueryResults();
};

