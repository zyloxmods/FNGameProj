#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAutoTestState : uint8 
{
	Login,
	FrontendLoad,
	FrontendPvELoad,
	FrontendPvETest,
	PvEMatchmaking,
	ZoneLoad,
	ZoneTest,
	Finished,
	MAX,
};
