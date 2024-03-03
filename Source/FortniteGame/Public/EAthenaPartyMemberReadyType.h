#pragma once
#include "CoreMinimal.h"
#include "EAthenaPartyMemberReadyType.generated.h"

UENUM(BlueprintType)
enum class EAthenaPartyMemberReadyType : uint8 {
    Ready,
    NotReady,
    Playing,
    Spectating,
    WatchingReplay,
};

