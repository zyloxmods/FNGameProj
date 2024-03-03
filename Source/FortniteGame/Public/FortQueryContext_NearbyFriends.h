#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_NearbyFriends.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_NearbyFriends : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_NearbyFriends();
};

