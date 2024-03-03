#pragma once
#include "CoreMinimal.h"
#include "CurieToggleGroupMemberStateChangeSignatureDelegate.generated.h"

class UFortCurieToggleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCurieToggleGroupMemberStateChangeSignature, UFortCurieToggleComponent*, ToggleComponent, bool, bActive);

