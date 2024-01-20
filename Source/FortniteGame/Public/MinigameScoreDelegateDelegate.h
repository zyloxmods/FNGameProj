#pragma once
#include "CoreMinimal.h"
#include "MinigameScoreEntry.h"
#include "MinigameScoreDelegateDelegate.generated.h"

class UFortPlaysetItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMinigameScoreDelegate, UFortPlaysetItemDefinition*, Playset, FMinigameScoreEntry, ScoreEntry);

