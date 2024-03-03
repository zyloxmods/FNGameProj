#pragma once
#include "CoreMinimal.h"
#include "QuestComponentCustomVisualsPassedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestComponentCustomVisualsPassed, AFortPlayerController*, PlayerController, bool, FullyInitalized);

