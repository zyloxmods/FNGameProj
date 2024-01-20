#include "FortPlayerSurveyAnswerWidgetBase.h"

void UFortPlayerSurveyAnswerWidgetBase::SetQuestion(UFortPlayerSurveyQuestion* Value) {
}

void UFortPlayerSurveyAnswerWidgetBase::SetAnswerContainer(TScriptInterface<IFortPlayerSurveyAnswerContainer> Value) {
}

void UFortPlayerSurveyAnswerWidgetBase::RestartStopwatch(FTimespan StartTime) {
}

void UFortPlayerSurveyAnswerWidgetBase::NativeHandleAnswerContainerChanged() {
}

void UFortPlayerSurveyAnswerWidgetBase::NativeHandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}

void UFortPlayerSurveyAnswerWidgetBase::HandleQuestionChanged_Implementation() {
}



void UFortPlayerSurveyAnswerWidgetBase::HandleAnswerChanged_Implementation(const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}


FTimespan UFortPlayerSurveyAnswerWidgetBase::GetStopwatchTime() const {
    return FTimespan{};
}

UFortPlayerSurveyQuestion* UFortPlayerSurveyAnswerWidgetBase::GetQuestion() const {
    return NULL;
}


TScriptInterface<IFortPlayerSurveyAnswerContainer> UFortPlayerSurveyAnswerWidgetBase::GetAnswerContainer() const {
    return NULL;
}

void UFortPlayerSurveyAnswerWidgetBase::CommitCurrentAnswer() {
}

UFortPlayerSurveyAnswerWidgetBase::UFortPlayerSurveyAnswerWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Question = NULL;
}

