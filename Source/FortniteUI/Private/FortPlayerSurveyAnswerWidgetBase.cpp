#include "FortPlayerSurveyAnswerWidgetBase.h"

void UFortPlayerSurveyAnswerWidgetBase::SetQuestion(UFortPlayerSurveyQuestionLegacy* Value) {
}

void UFortPlayerSurveyAnswerWidgetBase::SetAnswerContainer(UFortPlayerSurveyQuestionSelector* Value) {
}

void UFortPlayerSurveyAnswerWidgetBase::RestartStopwatch(FTimespan StartTime) {
}

void UFortPlayerSurveyAnswerWidgetBase::NativeHandleAnswerContainerChanged() {
}

void UFortPlayerSurveyAnswerWidgetBase::NativeHandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}

bool UFortPlayerSurveyAnswerWidgetBase::IsCurrentAnswerValid() const {
    return false;
}

void UFortPlayerSurveyAnswerWidgetBase::HandleQuestionChanged_Implementation() {
}



void UFortPlayerSurveyAnswerWidgetBase::HandleAnswerChanged_Implementation(const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}


FTimespan UFortPlayerSurveyAnswerWidgetBase::GetStopwatchTime() const {
    return FTimespan{};
}

UFortPlayerSurveyQuestionLegacy* UFortPlayerSurveyAnswerWidgetBase::GetQuestion() const {
    return NULL;
}


UFortPlayerSurveyQuestionSelector* UFortPlayerSurveyAnswerWidgetBase::GetAnswerContainer() const {
    return NULL;
}

void UFortPlayerSurveyAnswerWidgetBase::CommitCurrentAnswer() {
}

UFortPlayerSurveyAnswerWidgetBase::UFortPlayerSurveyAnswerWidgetBase() {
    this->CurrentAnswerContainer = NULL;
    this->Question = NULL;
}

