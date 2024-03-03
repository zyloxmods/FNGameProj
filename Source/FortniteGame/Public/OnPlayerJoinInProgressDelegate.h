#pragma once
#include "CoreMinimal.h"
#include "OnPlayerJoinInProgressDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerJoinInProgress, APawn*, Pawn);

