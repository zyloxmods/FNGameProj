#pragma once
#include "CoreMinimal.h"
#include "EArgonRacePhase.h"
#include "ArgonRacePhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArgonRacePhaseChanged, EArgonRacePhase, NewRacePhase);

