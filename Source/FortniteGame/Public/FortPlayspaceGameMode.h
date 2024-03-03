#pragma once
#include "CoreMinimal.h"
#include "FortGameModeAthena.h"
#include "FortPlayspaceGameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortPlayspaceGameMode : public AFortGameModeAthena {
    GENERATED_BODY()
public:
    AFortPlayspaceGameMode();
};

