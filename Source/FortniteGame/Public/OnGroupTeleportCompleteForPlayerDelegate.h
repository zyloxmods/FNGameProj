#pragma once
#include "CoreMinimal.h"
#include "OnGroupTeleportCompleteForPlayerDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroupTeleportCompleteForPlayer, AFortPlayerPawn*, FortPlayerPawn);

