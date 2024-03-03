#pragma once
#include "CoreMinimal.h"
#include "BuildingActorOnInteractDelegate.generated.h"

class ABuildingActor;
class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingActorOnInteract, ABuildingActor*, SelfActor, AFortPawn*, InteractingPawn);

