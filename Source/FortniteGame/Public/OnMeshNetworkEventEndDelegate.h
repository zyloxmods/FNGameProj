#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "OnMeshNetworkEventEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshNetworkEventEnd, FName, EventName, EMeshNetworkNodeType, NodeType);

