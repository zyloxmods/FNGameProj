#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "OnMeshNodeTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeshNodeTypeChanged, EMeshNetworkNodeType, NodeType);

