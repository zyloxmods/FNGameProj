#pragma once
#include "CoreMinimal.h"
#include "PickupOnSpawnReadyDelegate.generated.h"

class AFortGameModePickup;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupOnSpawnReady, AFortGameModePickup*, SelfActor, const UFortItemDefinition*, ItemDefinition);

