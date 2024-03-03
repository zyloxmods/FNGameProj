#pragma once
#include "CoreMinimal.h"
#include "EFortPlaylistTeamSizeType.generated.h"

UENUM(BlueprintType)
enum class EFortPlaylistTeamSizeType : uint8 {
    Solo,
    Duo,
    Trio,
    Squad,
    LargeTeam,
    MAX,
};

