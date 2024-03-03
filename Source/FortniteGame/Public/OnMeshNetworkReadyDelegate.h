#pragma once
#include "CoreMinimal.h"
#include "EMeshNetworkNodeType.h"
#include "OnMeshNetworkReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeshNetworkReady, EMeshNetworkNodeType, NodeType);

