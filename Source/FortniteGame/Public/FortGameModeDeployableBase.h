#pragma once
#include "CoreMinimal.h"
#include "FortGameModeZone.h"
#include "FortGameModeDeployableBase.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeDeployableBase : public AFortGameModeZone {
    GENERATED_BODY()
public:
    AFortGameModeDeployableBase();
};

