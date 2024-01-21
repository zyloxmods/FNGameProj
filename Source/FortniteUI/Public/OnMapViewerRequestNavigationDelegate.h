#pragma once
#include "CoreMinimal.h"
#include "EViewerNavigationDirection.h"
#include "OnMapViewerRequestNavigationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapViewerRequestNavigation, EViewerNavigationDirection, NavigationDirection);

