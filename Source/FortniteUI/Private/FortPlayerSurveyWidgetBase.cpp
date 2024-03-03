#include "FortPlayerSurveyWidgetBase.h"

void UFortPlayerSurveyWidgetBase::ResetSurvey() {
}

void UFortPlayerSurveyWidgetBase::NativeHandleSurveyChanged() {
}

void UFortPlayerSurveyWidgetBase::NativeHandleQuestionsChanged(UObject* Source, int32 Index) {
}

void UFortPlayerSurveyWidgetBase::NativeHandleDescriptionChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBase::HandleQuestionChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBase::HandleNumQuestionsChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBase::HandleNavigationStateChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBase::HandleIndexChange(UObject* Source) {
}

void UFortPlayerSurveyWidgetBase::HandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}

UFortPlayerSurveyWidgetBase::UFortPlayerSurveyWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->QuestionSelectorClass = NULL;
    this->Survey = NULL;
    this->ActiveQuestionSelector = NULL;
    this->Widget_AnswerSelector = NULL;
    this->Text_SurveyTitle = NULL;
    this->Text_QuestionNumber = NULL;
    this->Text_Question = NULL;
    this->Text_Subtitle = NULL;
    this->Switcher_NextButton = NULL;
    this->Button_NextQuestion = NULL;
    this->Button_Finish = NULL;
    this->Button_Cancel = NULL;
    this->Button_Close = NULL;
}

