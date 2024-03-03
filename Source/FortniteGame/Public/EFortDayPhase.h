#pragma once
#include "CoreMinimal.h"
#include "EFortDayPhase.generated.h"

UENUM(BlueprintType)
enum class EFortDayPhase : uint8
{
        Morning,
        Day,
        Evening,
        Night,
        NumPhases,
 };


