#include "FortPlayerSurveyDispatcher.h"

void UFortPlayerSurveyDispatcher::SetOwningPlayer(APlayerController* Value) {
}

void UFortPlayerSurveyDispatcher::HandleSurveyDismissed(UFortPlayerSurveyPanelBase* Source) {
}

void UFortPlayerSurveyDispatcher::HandleFirstActivation(UCommonActivatablePanel* Panel) {
}

void UFortPlayerSurveyDispatcher::HandleDisplayOneSurvey() {
}

void UFortPlayerSurveyDispatcher::DisplaySurveys(int32 SurveyCount) {
}

UFortPlayerSurveyDispatcher::UFortPlayerSurveyDispatcher() {
    this->WidgetClass = NULL;
    this->OwningPlayer = NULL;
    this->SurveyContext = NULL;
    this->CurrentWidget = NULL;
}

