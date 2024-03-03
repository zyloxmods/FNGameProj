#pragma once
#include "CoreMinimal.h"
#include "OnCurrentPageIndexChangedDelegate.generated.h"

class UCommonWidgetCarousel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentPageIndexChanged, UCommonWidgetCarousel*, CarouselWidget, int32, CurrentPageIndex);

