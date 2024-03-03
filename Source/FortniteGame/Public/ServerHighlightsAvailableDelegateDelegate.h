#pragma once
#include "CoreMinimal.h"
#include "ServerHighlightsAvailableDelegateDelegate.generated.h"

class AFortReplaySpectator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerHighlightsAvailableDelegate, AFortReplaySpectator*, Sender, bool, bAreHghlightsAvailable);

