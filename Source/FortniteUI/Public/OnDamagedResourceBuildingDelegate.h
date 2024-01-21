#pragma once
#include "CoreMinimal.h"
#include "OnDamagedResourceBuildingDelegate.generated.h"

class ABuildingSMActor;
class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDamagedResourceBuilding, ABuildingSMActor*, BuildingSMActor, UFortItem*, PotentialWorldItem, bool, bDestroyed, bool, bJustHitWeakspot);

