#pragma once
#include "CoreMinimal.h"
#include "PlayspaceUser.h"
#include "NotifyPlayspaceUserAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyPlayspaceUserAdded, const FPlayspaceUser&, AddedUser);

