#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInitializedDelegateDelegate.generated.h"

class AFortPlayerPawn;
class UFortAbilitySystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilitySystemInitializedDelegate, UFortAbilitySystemComponent*, AbilitySystemComponent, AFortPlayerPawn*, AffectedPawn);

