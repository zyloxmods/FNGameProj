#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyAnswerContainerChangeReason.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyAnswerContainerChangeReason : uint8 {
    AnswerChange,
    QuestionChange,
    ProxyChange,
};

