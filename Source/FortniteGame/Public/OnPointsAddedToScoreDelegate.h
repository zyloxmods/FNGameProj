#pragma once
#include "CoreMinimal.h"
#include "EAthenaScoringEvent.h"
#include "OnPointsAddedToScoreDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPointsAddedToScore, int32, NewPoints, EAthenaScoringEvent, ScoreType);

