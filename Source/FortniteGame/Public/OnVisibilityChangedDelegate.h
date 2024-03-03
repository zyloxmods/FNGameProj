#pragma once
#include "CoreMinimal.h"
#include "OnVisibilityChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVisibilityChanged, AActor*, Actor, uint8, TeamObserving, bool, bVisible);

