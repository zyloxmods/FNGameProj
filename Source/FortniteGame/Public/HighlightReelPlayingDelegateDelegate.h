#pragma once
#include "CoreMinimal.h"
#include "HighlightReelPlayingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighlightReelPlayingDelegate, bool, bIsPlaying);

