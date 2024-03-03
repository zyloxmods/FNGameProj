#pragma once
#include "CoreMinimal.h"
#include "OnCreativeGhostChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeGhostChanged, bool, bIsGhosting);

