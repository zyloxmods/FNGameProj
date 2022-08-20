#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPlayerSurveyAnswerContainerChangeReason : uint8 
{
	QuestionChange,
	ProxyChange,
	EFortPlayerSurveyAnswerContainerChangeReason_MAX,
};
