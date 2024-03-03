#pragma once
#include "CoreMinimal.h"
#include "EFortSpawnActorTime.generated.h"

UENUM(BlueprintType)
enum class EFortSpawnActorTime : uint8 {
    PostPlaylistLoad,
    StartOfStormHoldTime,
};

