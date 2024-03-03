#pragma once
#include "CoreMinimal.h"
#include "EAlertLevel.h"
#include "OnAlertLevelChangedEventDelegate.generated.h"

class AFortAthenaAIBotController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAlertLevelChangedEvent, AFortAthenaAIBotController*, BotController, EAlertLevel, OldAlertLevel, EAlertLevel, NewAlertLevel);

