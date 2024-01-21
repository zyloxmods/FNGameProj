#pragma once
#include "CoreMinimal.h"
#include "FortTestControllerPlayReplay.h"
#include "FortTestControllerSyncedReplay.generated.h"

UCLASS(Blueprintable)
class UFortTestControllerSyncedReplay : public UFortTestControllerPlayReplay {
    GENERATED_BODY()
public:
    UFortTestControllerSyncedReplay();
};

