#pragma once
#include "CoreMinimal.h"
#include "EFOBIOStatus.h"
#include "OnBuildingFOBConfigActorIOOperationCompleteDelegate.generated.h"

class UFortFOBCoreDecoItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBuildingFOBConfigActorIOOperationComplete, EFOBIOStatus, IOOperation, bool, bSuccess, UFortFOBCoreDecoItemDefinition*, SelectedCoreDef);

