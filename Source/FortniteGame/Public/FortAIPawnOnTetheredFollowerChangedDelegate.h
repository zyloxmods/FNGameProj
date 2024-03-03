#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnOnTetheredFollowerChangedDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortAIPawnOnTetheredFollowerChanged, AFortPawn*, NewFollower, AFortPawn*, OldFollower);

