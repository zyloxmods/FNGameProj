#pragma once
#include "CoreMinimal.h"
#include "NotifyPlayspaceInitializedDelegate.generated.h"

class APlayspace;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyPlayspaceInitialized, APlayspace*, Playspace);

