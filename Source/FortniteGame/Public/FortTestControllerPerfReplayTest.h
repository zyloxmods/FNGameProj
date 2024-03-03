#pragma once
#include "CoreMinimal.h"
#include "FortTestControllerPlayReplay.h"
#include "FortTestControllerPerfReplayTest.generated.h"

UCLASS(Blueprintable)
class UFortTestControllerPerfReplayTest : public UFortTestControllerPlayReplay {
    GENERATED_BODY()
public:
    UFortTestControllerPerfReplayTest();
};

