#pragma once
#include "CoreMinimal.h"
#include "EFortDayPhase.h"
#include "DayNightPhaseChangeBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDayNightPhaseChangeBlueprintEventSignature, EFortDayPhase, CurrentDayPhase, EFortDayPhase, PreviousDayPhase, bool, bAtCreation);

