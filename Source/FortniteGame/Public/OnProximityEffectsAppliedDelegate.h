#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnProximityEffectsAppliedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProximityEffectsApplied, AActor*, TargetActor, FGameplayTag, BucketTag);

