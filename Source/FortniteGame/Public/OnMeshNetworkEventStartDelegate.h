#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMeshNetworkNodeType.h"
#include "OnMeshNetworkEventStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMeshNetworkEventStart, FName, EventName, FDateTime, EventStartTime, EMeshNetworkNodeType, NodeType, const FString&, EventParameters);

