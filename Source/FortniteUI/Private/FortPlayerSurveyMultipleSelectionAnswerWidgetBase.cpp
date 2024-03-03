#include "FortPlayerSurveyMultipleSelectionAnswerWidgetBase.h"

void UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::SetCurrentAnswer(const FFortPlayerSurveyAnswerMultipleSelection& Value) {
}

void UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::SetChoiceSelected(int32 Index, bool Value) {
}

bool UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::IsChoiceSelected(int32 Index) const {
    return false;
}

int32 UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::GetNumChoicesSelected() const {
    return 0;
}

UFortPlayerSurveyQuestionMultipleSelection* UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::GetCurrentQuestion() const {
    return NULL;
}

void UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::GetCurrentAnswer(bool& bOutIsSet, FFortPlayerSurveyAnswerMultipleSelection& OutAnswer) const {
}

bool UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::CanToggleChoice(int32 Index) const {
    return false;
}

UFortPlayerSurveyMultipleSelectionAnswerWidgetBase::UFortPlayerSurveyMultipleSelectionAnswerWidgetBase() {
}

