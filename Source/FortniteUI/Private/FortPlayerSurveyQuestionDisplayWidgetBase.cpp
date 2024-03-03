#include "FortPlayerSurveyQuestionDisplayWidgetBase.h"
#include "Templates/SubclassOf.h"

void UFortPlayerSurveyQuestionDisplayWidgetBase::NativeHandleQuestionChanged(UObject* Source) {
}

void UFortPlayerSurveyQuestionDisplayWidgetBase::NativeHandleQAChanged() {
}

void UFortPlayerSurveyQuestionDisplayWidgetBase::InitSwitcherChildrenLoop(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> WidgetClass) {
}


UFortPlayerSurveyQuestionDisplayWidgetBase::UFortPlayerSurveyQuestionDisplayWidgetBase() {
    this->AnswerWidgetDataTable = NULL;
    this->CurrentQA = NULL;
    this->CurrentAnswerWidget = NULL;
    this->Widget_Empty = NULL;
    this->Switcher_Main = NULL;
}

