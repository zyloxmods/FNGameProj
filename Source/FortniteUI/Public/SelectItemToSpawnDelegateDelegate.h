#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "SelectItemToSpawnDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectItemToSpawnDelegate, FFortItemEntry, ItemToSpawn);

