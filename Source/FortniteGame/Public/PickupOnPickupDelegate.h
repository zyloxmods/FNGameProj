#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PickupOnPickupDelegate.generated.h"

class AFortPawn;
class AFortPickup;
class UFortWorldItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPickupOnPickup, AFortPickup*, SelfActor, AFortPawn*, InteractingPawn, const UFortWorldItemDefinition*, WorldItemDefinition, FVector, PickupLocation);

