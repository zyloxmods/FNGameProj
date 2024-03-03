#pragma once
#include "CoreMinimal.h"
#include "OnMissionBuildingSMActorHarvestedEventDelegate.generated.h"

class ABuildingSMActor;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMissionBuildingSMActorHarvestedEvent, ABuildingSMActor*, HarvestedBuilding, AFortPlayerPawn*, HarvesterPawn);

