#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "MissionSelectNavigationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionSelectNavigationDelegate, EUINavigation, NavigationDirection);

