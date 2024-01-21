#pragma once
#include "CoreMinimal.h"
#include "EFortReportDayPhase.h"
#include "OnHandleZonePeriodicReportDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandleZonePeriodicReport, EFortReportDayPhase, ReportEventType);

