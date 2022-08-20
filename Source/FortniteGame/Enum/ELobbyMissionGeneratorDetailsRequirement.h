#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ELobbyMissionGeneratorDetailsRequirement : uint8 
{
	NotRequired,
	Required,
	ELobbyMissionGeneratorDetailsRequirement_MAX,
};
