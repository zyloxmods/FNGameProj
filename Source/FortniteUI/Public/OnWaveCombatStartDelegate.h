#pragma once
#include "CoreMinimal.h"
#include "OnWaveCombatStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnWaveCombatStart, const FText&, LevelText, int32, Level, const FText&, WaveText, int32, WaveNum);

