#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPawnPosessionChangedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPawnPosessionChanged, APawn*, Pawn);

