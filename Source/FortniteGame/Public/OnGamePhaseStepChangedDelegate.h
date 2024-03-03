#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "OnGamePhaseStepChangedDelegate.generated.h"

class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGamePhaseStepChanged, const TScriptInterface<IFortSafeZoneInterface>&, SafeZoneInterface, const EAthenaGamePhaseStep, GamePhaseStep);

