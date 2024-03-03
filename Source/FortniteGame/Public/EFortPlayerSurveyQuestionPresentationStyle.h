#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyQuestionPresentationStyle : uint8 {
    Invalid,
    Standard,
    MultipleChoice_Rating,
    Num,
};

