#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFootstepAudioType : uint8 
{
	CrouchSprint,
	Walk,
	Sprint,
	Jump,
	Land,
	LandHard,
	Max_None,
	EFortFootstepAudioType_MAX,
};
