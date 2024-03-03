#pragma once
#include "CoreMinimal.h"
#include "OnAgentDBNOStatusChangedEventDelegate.generated.h"

class AFortAthenaAIBotController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAgentDBNOStatusChangedEvent, AFortAthenaAIBotController*, BotController, bool, bIsDBNO);

