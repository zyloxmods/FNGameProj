#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolInteractionStartedDelegate.generated.h"

class UObjectInteractionBehavior;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolInteractionStarted, UObjectInteractionBehavior*, InteractionMode);

