#pragma once
#include "CoreMinimal.h"
#include "OnRoomOwnerChangedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoomOwnerChanged, AFortPlayerController*, OwningPlayer);

