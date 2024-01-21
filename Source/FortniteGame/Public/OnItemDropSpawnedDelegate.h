#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnItemDropSpawnedDelegate.generated.h"

class AFortPickup;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemDropSpawned, const AFortPickup*, Pickup, const UFortItemDefinition*, ItemDef, FGameplayTagContainer, ItemTags);

