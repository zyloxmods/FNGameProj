#pragma once
#include "CoreMinimal.h"
#include "PlayspaceUser.h"
#include "NotifyPlayspaceUserRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyPlayspaceUserRemoved, const FPlayspaceUser&, RemovedUser);

