#pragma once
#include "CoreMinimal.h"
#include "OnPrefabForCurrentlyDisplayedItemReadyDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrefabForCurrentlyDisplayedItemReady, AFortPlayerPawn*, Pawn);

