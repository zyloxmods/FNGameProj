#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "OnMeshNetworkEventBurstDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMeshNetworkEventBurst, FName, EventName, EMeshNetworkNodeType, NodeType, const FString&, EventParameters);

