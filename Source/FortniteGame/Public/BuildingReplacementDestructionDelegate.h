#pragma once
#include "CoreMinimal.h"
#include "EBuildingReplacementType.h"
#include "BuildingReplacementDestructionDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingReplacementDestruction, TEnumAsByte<EBuildingReplacementType>, ReplacementType, const ABuildingSMActor*, NewBuildingActor);

