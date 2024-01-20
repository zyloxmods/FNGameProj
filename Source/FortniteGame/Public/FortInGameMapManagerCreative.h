#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManagerAthena.h"
#include "FortInGameMapManagerCreative.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortInGameMapManagerCreative : public AFortInGameMapManagerAthena {
    GENERATED_BODY()
public:
    AFortInGameMapManagerCreative();
};

