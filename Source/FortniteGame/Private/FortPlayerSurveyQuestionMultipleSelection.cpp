#include "FortPlayerSurveyQuestionMultipleSelection.h"

bool UFortPlayerSurveyQuestionMultipleSelection::TryGetMaxNumAnswers(int32& OutMaxNumAnswers) const {
    return false;
}

UFortPlayerSurveyQuestionMultipleSelection::UFortPlayerSurveyQuestionMultipleSelection() {
    MinNumAnswers = 0;
    MaxNumAnswers = 0;
}

