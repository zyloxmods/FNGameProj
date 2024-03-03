#pragma once
#include "CoreMinimal.h"
#include "NewPlayerStateDelegateDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewPlayerStateDelegate, AFortPlayerPawn*, AffectedPawn);

