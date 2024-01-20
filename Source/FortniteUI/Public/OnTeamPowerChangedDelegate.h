#pragma once
#include "CoreMinimal.h"
#include "OnTeamPowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamPowerChanged, int32, TeamPower, int32, PersonalPower);

