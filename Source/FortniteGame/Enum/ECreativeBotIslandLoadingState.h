#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECreativeBotIslandLoadingState : uint8 
{
	ILS_LoadNotStarted,
	ILS_GrantPlotItem,
	ILS_WaitingUserPlotReady,
	ILS_LoadInProgress,
	ILS_LoadComplete,
	ILS_Teleporting,
	ILS_Returning,
	ILS_Items,
	ILS_MAX,
};
