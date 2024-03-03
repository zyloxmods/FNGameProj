#pragma once
#include "CoreMinimal.h"
#include "OnDonutIdleGameEndScoreDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDonutIdleGameEndScore, int32, NewEndScore, int32, NumAgroMonsters, int32, NumChimichangas);

