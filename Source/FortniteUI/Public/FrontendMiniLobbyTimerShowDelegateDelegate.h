#pragma once
#include "CoreMinimal.h"
#include "FrontendMiniLobbyTimerShowDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrontendMiniLobbyTimerShowDelegate, bool, bShow);

