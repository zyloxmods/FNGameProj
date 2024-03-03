#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h"
#include "FortQueryItemType_Goal.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortQueryItemType_Goal : public UEnvQueryItemType_ActorBase {
    GENERATED_BODY()
public:
    UFortQueryItemType_Goal();
};

