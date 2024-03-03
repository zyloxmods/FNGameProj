#pragma once
#include "CoreMinimal.h"
#include "OnMeshPlayerRequestedDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshPlayerRequested, APlayerController*, Player, FName, Tag);

