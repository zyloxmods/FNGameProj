#pragma once
#include "CoreMinimal.h"
#include "EFortWorldManagerState.generated.h"

UENUM(BlueprintType)
enum EFortWorldManagerState {
    WMS_Created,
    WMS_QueryingWorld,
    WMS_WorldQueryComplete,
    WMS_CreatingNewWorld,
    WMS_LoadingExistingWorld,
    WMS_Running,
    WMS_Failed,
    WMS_MAX UMETA(Hidden),
};

