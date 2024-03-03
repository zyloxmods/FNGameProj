#pragma once
#include "CoreMinimal.h"
#include "CurieToggleGroupSameStateSignatureDelegate.generated.h"

class UFortCurieToggleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCurieToggleGroupSameStateSignature, UFortCurieToggleComponent*, LastToggleComponent);

