#pragma once
#include "CoreMinimal.h"
#include "OnDeliverableAbilityInfoChangedForExitingTouchActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeliverableAbilityInfoChangedForExitingTouchActor, AActor*, AffectedActor);

