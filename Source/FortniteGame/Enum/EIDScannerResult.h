#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EIDScannerResult : uint8 
{
	Success_DownedPlayer,
	Success_DownedGuard,
	Success_PlayerIsDisguised,
	Failure_NotFromFaction,
	Other,
	EIDScannerResult_MAX,
};
