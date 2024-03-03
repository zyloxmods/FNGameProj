#pragma once
#include "CoreMinimal.h"
#include "BuildingTurretTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingTurretTargetChanged, AActor*, NewTarget);

