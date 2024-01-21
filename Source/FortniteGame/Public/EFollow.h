#pragma once
#include "CoreMinimal.h"
#include "EFollow.generated.h"

UENUM(BlueprintType)
enum class EFollow : uint8 {
    NextTeammate,
    PreviousTeammate,
    SpecialActor,
};

