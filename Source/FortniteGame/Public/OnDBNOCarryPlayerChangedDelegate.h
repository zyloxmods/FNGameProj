#pragma once
#include "CoreMinimal.h"
#include "OnDBNOCarryPlayerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDBNOCarryPlayerChanged, bool, bCarryingPlayer);

