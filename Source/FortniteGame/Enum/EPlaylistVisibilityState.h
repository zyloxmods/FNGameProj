#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlaylistVisibilityState : uint8 
{
	Disabled,
	EnabledButInvisible,
	Hidden,
	EPlaylistVisibilityState_MAX,
};
