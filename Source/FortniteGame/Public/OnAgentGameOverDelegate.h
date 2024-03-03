#pragma once
#include "CoreMinimal.h"
#include "OnAgentGameOverDelegate.generated.h"

class AFortAthenaAIBotController;
class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAgentGameOver, AFortAthenaAIBotController*, BotController, AFortPawn*, AgentPawn);

