#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeEndless.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeEndless : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeEndless();
};

