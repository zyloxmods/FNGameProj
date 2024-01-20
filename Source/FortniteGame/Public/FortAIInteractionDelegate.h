#pragma once
#include "CoreMinimal.h"
#include "FortAIInteractionDelegate.generated.h"

class AFortAIPawn;
class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortAIInteraction, AFortAIPawn*, AI, AFortPlayerController*, InteractingPlayerController);

