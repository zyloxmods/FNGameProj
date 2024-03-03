#pragma once
#include "CoreMinimal.h"
#include "ECreativeBotIslandLoadingState.generated.h"

UENUM(BlueprintType)
enum class ECreativeBotIslandLoadingState : uint8 {
    ILS_NONE,
    ILS_LoadNotStarted,
    ILS_GrantPlotItem,
    ILS_WaitingUserPlotReady,
    ILS_LoadInProgress,
    ILS_LoadComplete,
    ILS_Teleporting,
    ILS_Returning,
    ILS_Items,
    ILS_MAX UMETA(Hidden),
};

