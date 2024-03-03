#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolFocusChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolFocusChanged, AActor*, FocusedActor);

