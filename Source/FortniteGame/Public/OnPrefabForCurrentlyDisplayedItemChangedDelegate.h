#pragma once
#include "CoreMinimal.h"
#include "OnPrefabForCurrentlyDisplayedItemChangedDelegate.generated.h"

class AActor;
class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPrefabForCurrentlyDisplayedItemChanged, AActor*, NewPrefab, UFortItem*, NewItem);

