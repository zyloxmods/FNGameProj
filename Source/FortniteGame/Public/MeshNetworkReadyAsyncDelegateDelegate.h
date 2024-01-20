#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "MeshNetworkReadyAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeshNetworkReadyAsyncDelegate, EMeshNetworkNodeType, NodeType);

