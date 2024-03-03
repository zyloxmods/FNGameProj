#pragma once
#include "CoreMinimal.h"
#include "OnStealthMeterChangedEventDelegate.generated.h"

class AFortAthenaAIBotController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStealthMeterChangedEvent, AFortAthenaAIBotController*, BotController, float, StealthMeterTarget, float, StealthMeterTargetTime);

