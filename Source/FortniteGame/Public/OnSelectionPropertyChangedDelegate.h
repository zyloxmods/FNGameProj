#pragma once
#include "CoreMinimal.h"
#include "ESelectionProperty.h"
#include "OnSelectionPropertyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionPropertyChanged, ESelectionProperty, SelectionProperty);

