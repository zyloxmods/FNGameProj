#pragma once
#include "CoreMinimal.h"
#include "ProjectileEventData.h"
#include "SpawnProjectileEventDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnProjectileEventData, const FProjectileEventData&, ProjectileData);

