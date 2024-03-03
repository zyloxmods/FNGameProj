#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeDeployableBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortGameModeDeployableBase : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeDeployableBase();
};

