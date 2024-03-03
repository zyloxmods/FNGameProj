#pragma once
#include "CoreMinimal.h"
#include "ReplayHighlightHighlightDelegateDelegate.generated.h"

class UFortReplayHighlightItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayHighlightHighlightDelegate, UFortReplayHighlightItemBase*, Sender);

