#include "FortPlayerSurveyCMSScheduler.h"

void UFortPlayerSurveyCMSScheduler::HandleSurveyFinished(UObject* Source, EFortPlayerSurveyFinishReason Reason) {
}

UFortPlayerSurveyCMSScheduler::UFortPlayerSurveyCMSScheduler() {
    this->CMSSurveyDataSource = NULL;
    this->SurveyTracker = NULL;
    this->SurveyManager = NULL;
    this->Player = NULL;
}

