#include "FortSurveyNumericalChoiceWidget.h"

void UFortSurveyNumericalChoiceWidget::UpdateText() {
}

void UFortSurveyNumericalChoiceWidget::UpdateRatingButtons() {
}

void UFortSurveyNumericalChoiceWidget::HandlePlayerRequestAnswer(int32 AnswerIndex) {
}

UWidget* UFortSurveyNumericalChoiceWidget::HandleGetDefaultFocusedWidget() const {
    return NULL;
}

UFortSurveyNumericalChoiceWidget::UFortSurveyNumericalChoiceWidget() {
    this->DummyButton = NULL;
    this->Text_MinRating = NULL;
    this->Text_MaxRating = NULL;
}

