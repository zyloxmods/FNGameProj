#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPlayerSurveyFinishReason : uint8 
{
	Canceled,
	Disallowed,
	EFortPlayerSurveyFinishReason_MAX,
};
