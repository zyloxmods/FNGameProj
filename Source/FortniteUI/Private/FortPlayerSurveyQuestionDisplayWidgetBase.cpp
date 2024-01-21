#include "FortPlayerSurveyQuestionDisplayWidgetBase.h"

void UFortPlayerSurveyQuestionDisplayWidgetBase::SetQA(TScriptInterface<IFortPlayerSurveyAnswerableQuestion> Value) {
}

void UFortPlayerSurveyQuestionDisplayWidgetBase::NativeHandleQuestionChanged(UObject* Source) {
}

void UFortPlayerSurveyQuestionDisplayWidgetBase::NativeHandleQAChanged() {
}



TScriptInterface<IFortPlayerSurveyAnswerableQuestion> UFortPlayerSurveyQuestionDisplayWidgetBase::GetQA() const {
    return NULL;
}

UFortPlayerSurveyQuestionDisplayWidgetBase::UFortPlayerSurveyQuestionDisplayWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

