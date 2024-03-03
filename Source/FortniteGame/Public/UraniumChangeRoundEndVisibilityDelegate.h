#pragma once
#include "CoreMinimal.h"
#include "UraniumChangeRoundEndVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUraniumChangeRoundEndVisibility, bool, bNewVisibility);

