#pragma once
#include "CoreMinimal.h"
#include "FortNavArea_DefaultSmashable.h"
#include "FortNavArea_PlayerBuiltSmashable.generated.h"

UCLASS(Blueprintable)
class UFortNavArea_PlayerBuiltSmashable : public UFortNavArea_DefaultSmashable {
    GENERATED_BODY()
public:
    UFortNavArea_PlayerBuiltSmashable();
};

