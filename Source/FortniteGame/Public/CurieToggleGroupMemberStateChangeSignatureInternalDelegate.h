#pragma once
#include "CoreMinimal.h"
#include "CurieToggleGroupMemberStateChangeSignatureInternalDelegate.generated.h"

class UFortCurieToggleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurieToggleGroupMemberStateChangeSignatureInternal, UFortCurieToggleComponent*, ToggleComponent, bool, bActive);

