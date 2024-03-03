#include "FortPlayerSurveyQuestionMultipleSelection.h"

bool UFortPlayerSurveyQuestionMultipleSelection::TryGetMaxNumAnswers(int32& OutMaxNumAnswers) const {
    return false;
}

UFortPlayerSurveyQuestionMultipleSelection::UFortPlayerSurveyQuestionMultipleSelection() {
    this->MinNumAnswers = 0;
    this->MaxNumAnswers = 0;
}

