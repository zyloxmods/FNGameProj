#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPlayerSurveyQuestionType : uint8 
{
	MultipleChoice,
	MultipleSelection,
	FreeFormText,
	Num,
	EFortPlayerSurveyQuestionType_MAX,
};
