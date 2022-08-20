#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortReportDayPhase : uint8 
{
	Dusk,
	ZoneFinished,
	PlayerLogout,
	EFortReportDayPhase_MAX,
};
