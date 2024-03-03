#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyQuestionType.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyQuestionType : uint8 {
    Invalid,
    MultipleChoice,
    MultipleSelection,
    FreeFormText,
    Num,
};

