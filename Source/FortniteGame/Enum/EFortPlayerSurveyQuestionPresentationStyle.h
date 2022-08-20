#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPlayerSurveyQuestionPresentationStyle : uint8 
{
	Standard,
	MultipleChoice_Rating,
	Num,
	EFortPlayerSurveyQuestionPresentationStyle_MAX,
};
