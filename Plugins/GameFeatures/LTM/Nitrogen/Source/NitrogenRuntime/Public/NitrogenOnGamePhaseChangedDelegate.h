#pragma once
#include "CoreMinimal.h"
#include "ENitrogenGamePhase.h"
#include "NitrogenOnGamePhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNitrogenOnGamePhaseChanged, ENitrogenGamePhase, NewGamePhase);

