#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeBoss.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortGameModeBoss : public AFortGameModePvE {
    GENERATED_BODY()
public:
    AFortGameModeBoss();
};

