#pragma once
#include "CoreMinimal.h"
#include "ItemWidgetCreatedDelegate.generated.h"

class UFortItem;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemWidgetCreated, UWidget*, Widget, UFortItem*, Item);

