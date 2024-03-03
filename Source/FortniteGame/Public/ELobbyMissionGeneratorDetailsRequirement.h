#pragma once
#include "CoreMinimal.h"
#include "ELobbyMissionGeneratorDetailsRequirement.generated.h"

UENUM(BlueprintType)
enum class ELobbyMissionGeneratorDetailsRequirement : uint8 {
    Unknown,
    NotRequired,
    Required,
};

