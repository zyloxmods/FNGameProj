#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "OnGamePhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePhaseChanged, EAthenaGamePhase, GamePhase);

