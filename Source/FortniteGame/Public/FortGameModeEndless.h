#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeEndless.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortGameModeEndless : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeEndless();
};

