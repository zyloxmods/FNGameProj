#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "OnGamePhaseStepChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePhaseStepChanged, EAthenaGamePhaseStep, GamePhaseStep);

