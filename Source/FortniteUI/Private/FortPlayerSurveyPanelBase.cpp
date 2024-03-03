#include "FortPlayerSurveyPanelBase.h"


void UFortPlayerSurveyPanelBase::SetSurvey(UFortPlayerSurveyBase* Value) {
}


void UFortPlayerSurveyPanelBase::HandlePlayerSurveyEnded() {
}

UFortPlayerSurveyBase* UFortPlayerSurveyPanelBase::GetSurvey() const {
    return NULL;
}

UFortPlayerSurveyPanelBase::UFortPlayerSurveyPanelBase() {
    this->Survey = NULL;
    this->PanelContents = NULL;
}

