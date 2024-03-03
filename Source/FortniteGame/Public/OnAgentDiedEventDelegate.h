#pragma once
#include "CoreMinimal.h"
#include "OnAgentDiedEventDelegate.generated.h"

class AFortAthenaAIBotController;
class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAgentDiedEvent, AFortAthenaAIBotController*, BotController, AFortPawn*, AgentPawn);

