#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPawnPossessedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPawnPossessed, APawn*, PossessedPawn);

