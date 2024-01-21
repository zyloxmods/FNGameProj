#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBecameIrrelevantDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBecameIrrelevant, AFortPlayerState*, NewlyIrrelevantPlayer);

