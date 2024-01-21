#pragma once
#include "CoreMinimal.h"
#include "EFortLevelStreamingState.generated.h"

UENUM(BlueprintType)
enum EFortLevelStreamingState {
    LSS_Unloaded,
    LSS_Loaded,
    LSS_UnconditionalFoundationsUpdated,
    LSS_AllFoundationsUpdated,
    LSS_NewActorsCreatedButNotUpdated,
    LSS_AllUpdated,
    LSS_Ready,
    LSS_MAX UMETA(Hidden),
};

