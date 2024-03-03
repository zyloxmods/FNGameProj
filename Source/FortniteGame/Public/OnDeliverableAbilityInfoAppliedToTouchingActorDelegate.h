#pragma once
#include "CoreMinimal.h"
#include "OnDeliverableAbilityInfoAppliedToTouchingActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeliverableAbilityInfoAppliedToTouchingActor, AActor*, AffectedActor);

