#pragma once
#include "CoreMinimal.h"
#include "OnItemPickedUpDelegate.generated.h"

class UFortWorldItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemPickedUp, UFortWorldItem*, NewItem, int32, Count);

