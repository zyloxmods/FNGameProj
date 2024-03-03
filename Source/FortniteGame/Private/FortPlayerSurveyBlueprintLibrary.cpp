#include "FortPlayerSurveyBlueprintLibrary.h"

FFortPlayerSurveyAnswer UFortPlayerSurveyBlueprintLibrary::MakeMultipleChoiceAnswer(const FFortPlayerSurveyAnswerMultipleChoice& Answer) {
    return FFortPlayerSurveyAnswer{};
}

FFortPlayerSurveyAnswer UFortPlayerSurveyBlueprintLibrary::MakeFreeFormTextAnswer(const FFortPlayerSurveyAnswerFreeFormText& Answer) {
    return FFortPlayerSurveyAnswer{};
}

FFortPlayerSurveyAnswerMultipleChoice UFortPlayerSurveyBlueprintLibrary::GetMultipleChoiceAnswer(const FFortPlayerSurveyAnswer& Answer, bool& bIsValid) {
    return FFortPlayerSurveyAnswerMultipleChoice{};
}

FFortPlayerSurveyAnswerFreeFormText UFortPlayerSurveyBlueprintLibrary::GetFreeFormTextAnswer(const FFortPlayerSurveyAnswer& Answer, bool& bIsValid) {
    return FFortPlayerSurveyAnswerFreeFormText{};
}

EFortPlayerSurveyQuestionType UFortPlayerSurveyBlueprintLibrary::GetAnswerType(const FFortPlayerSurveyAnswer& Answer) {
    return EFortPlayerSurveyQuestionType::Invalid;
}

FFortPlayerSurveyAnswerBase UFortPlayerSurveyBlueprintLibrary::GetAnswerBase(const FFortPlayerSurveyAnswer& Answer) {
    return FFortPlayerSurveyAnswerBase{};
}

UFortPlayerSurveyBlueprintLibrary::UFortPlayerSurveyBlueprintLibrary() {
}

