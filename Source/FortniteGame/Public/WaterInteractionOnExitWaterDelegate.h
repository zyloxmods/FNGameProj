#pragma once
#include "CoreMinimal.h"
#include "WaterInteractionOnExitWaterDelegate.generated.h"

class AFortWaterBodyActor;
class UFortWaterInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWaterInteractionOnExitWater, AFortWaterBodyActor*, WaterBody, UFortWaterInteractionComponent*, WaterInteractionComponent, bool, bIsLastBody);

