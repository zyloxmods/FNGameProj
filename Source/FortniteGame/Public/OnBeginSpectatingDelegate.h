#pragma once
#include "CoreMinimal.h"
#include "OnBeginSpectatingDelegate.generated.h"

class AFortPlayerStateZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginSpectating, AFortPlayerStateZone*, Spectator);

