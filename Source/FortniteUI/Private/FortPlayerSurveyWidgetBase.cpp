#include "FortPlayerSurveyWidgetBase.h"

void UFortPlayerSurveyWidgetBase::SetSurvey(TScriptInterface<IFortPlayerSurvey> Value) {
}

void UFortPlayerSurveyWidgetBase::NativeHandleSurveyChanged() {
}

void UFortPlayerSurveyWidgetBase::NativeHandleQuestionsChanged(UObject* Source, int32 Index) {
}

void UFortPlayerSurveyWidgetBase::NativeHandleDescriptionChanged(UObject* Source) {
}




TScriptInterface<IFortPlayerSurvey> UFortPlayerSurveyWidgetBase::GetSurvey() const {
    return NULL;
}

UFortPlayerSurveyWidgetBase::UFortPlayerSurveyWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

