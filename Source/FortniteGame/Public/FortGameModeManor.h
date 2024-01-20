#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeManor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeManor : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeManor();
};

