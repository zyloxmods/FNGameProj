#pragma once
#include "CoreMinimal.h"
#include "ActivatableScreenClosedEventDelegate.generated.h"

class APlayerController;
class UCommonActivatableWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActivatableScreenClosedEvent, UCommonActivatableWidget*, Widget, APlayerController*, Controller);

