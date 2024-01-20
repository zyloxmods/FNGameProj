#include "FortPlayerSurveyAnswerWidgetDataTable.h"
#include "Templates/SubclassOf.h"

TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> UFortPlayerSurveyAnswerWidgetDataTable::GetClassForSurvey(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle) const {
    return NULL;
}

void UFortPlayerSurveyAnswerWidgetDataTable::ForEach(const UFortPlayerSurveyAnswerWidgetDataTable::FForEachDelegate& Delegate) const {
}

UFortPlayerSurveyAnswerWidgetDataTable::UFortPlayerSurveyAnswerWidgetDataTable() {
}

