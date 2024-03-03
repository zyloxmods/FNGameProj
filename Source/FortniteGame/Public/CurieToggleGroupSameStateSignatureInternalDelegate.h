#pragma once
#include "CoreMinimal.h"
#include "CurieToggleGroupSameStateSignatureInternalDelegate.generated.h"

class UFortCurieToggleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurieToggleGroupSameStateSignatureInternal, UFortCurieToggleComponent*, LastToggleComponent);

