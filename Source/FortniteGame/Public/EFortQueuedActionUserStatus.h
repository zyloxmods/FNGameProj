#pragma once
#include "CoreMinimal.h"
#include "EFortQueuedActionUserStatus.generated.h"

UENUM(BlueprintType)
enum class EFortQueuedActionUserStatus : uint8 {
    Succeeded,
    Failed,
    WaitingForCloudRequest,
    WaitingForProfileSave,
};

