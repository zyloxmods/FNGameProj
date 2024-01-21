#pragma once
#include "CoreMinimal.h"
#include "VolumePerformanceMetrics.h"
#include "OnVolumePerformanceMetricsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumePerformanceMetricsUpdated, const FVolumePerformanceMetrics&, VolumePerformanceMetrics);

