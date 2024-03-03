#pragma once
#include "CoreMinimal.h"
#include "FortNavArea_DefaultSmashable.h"
#include "FortNavArea_LowSmashable.generated.h"

UCLASS(Blueprintable)
class UFortNavArea_LowSmashable : public UFortNavArea_DefaultSmashable {
    GENERATED_BODY()
public:
    UFortNavArea_LowSmashable();
};

