#pragma once
#include "CoreMinimal.h"
#include "EFortPlayspaceUserAcceptanceType.generated.h"

UENUM(BlueprintType)
enum class EFortPlayspaceUserAcceptanceType : uint8 {
    CustomLogic,
    Matchmaking,
    VolumeBased,
};

