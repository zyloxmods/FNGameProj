#pragma once
#include "CoreMinimal.h"
#include "WaterInteractionOnEnterWaterDelegate.generated.h"

class AFortWaterBodyActor;
class UFortWaterInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWaterInteractionOnEnterWater, AFortWaterBodyActor*, WaterBody, UFortWaterInteractionComponent*, WaterInteractionComponent, bool, bIsFirstBody);

