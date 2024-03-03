#pragma once
#include "CoreMinimal.h"
#include "FortItemEntry.h"
#include "OnItemActivatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemActivatedDelegate, FFortItemEntry, ItemToSpawn);

