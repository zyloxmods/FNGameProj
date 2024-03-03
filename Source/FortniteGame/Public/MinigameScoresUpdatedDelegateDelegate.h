#pragma once
#include "CoreMinimal.h"
#include "MinigameScoresUpdatedDelegateDelegate.generated.h"

class AFortMinigameScoreRegistry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinigameScoresUpdatedDelegate, AFortMinigameScoreRegistry*, ScoreRegistry);

