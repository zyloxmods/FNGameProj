#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeBoss.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeBoss : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeBoss();
};

