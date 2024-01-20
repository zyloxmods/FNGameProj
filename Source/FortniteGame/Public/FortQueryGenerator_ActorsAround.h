#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h"
#include "FortQueryGenerator_ActorsAround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass {
    GENERATED_BODY()
public:
    UFortQueryGenerator_ActorsAround();
};

