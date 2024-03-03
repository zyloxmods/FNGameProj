#pragma once
#include "CoreMinimal.h"
#include "ArgonEndTraversePointSetDelegate.generated.h"

class AArgonTraversePoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArgonEndTraversePointSet, AArgonTraversePoint*, EndTraversePoint);

