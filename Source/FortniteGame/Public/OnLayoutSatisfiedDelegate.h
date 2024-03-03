#pragma once
#include "CoreMinimal.h"
#include "OnLayoutSatisfiedDelegate.generated.h"

class ABuildingLayoutRequirement;
class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLayoutSatisfied, ABuildingLayoutRequirement*, LayoutRequirement, const ABuildingSMActor*, SatisfyingBuildingSMActor);

