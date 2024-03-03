#pragma once
#include "CoreMinimal.h"
#include "OnDamagedResourceVehicleDelegate.generated.h"

class AActor;
class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDamagedResourceVehicle, AActor*, VehicleActor, UFortItem*, PotentialWorldItem, bool, bDestroyed, bool, bJustHitWeakspot);

