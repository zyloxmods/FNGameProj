#pragma once
#include "CoreMinimal.h"
#include "OnEmoteInteractedDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmoteInteracted, AFortPlayerPawn*, Instigator);

