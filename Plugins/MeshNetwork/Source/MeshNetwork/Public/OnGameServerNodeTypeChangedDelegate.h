#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "OnGameServerNodeTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServerNodeTypeChanged, EMeshNetworkNodeType, NodeType);

