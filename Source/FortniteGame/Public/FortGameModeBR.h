#pragma once
#include "CoreMinimal.h"
#include "FortGameModeAthena.h"
#include "FortGameModeBR.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeBR : public AFortGameModeAthena {
    GENERATED_BODY()
public:
    AFortGameModeBR();
};

