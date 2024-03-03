#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase.h"

void UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::SetChoiceButtons(const TArray<UCommonButton*>& InButtonWidgets) {
}

void UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::NativeHandleButtonClicked(UCommonButton* AssociatedButton) {
}



FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::GetFocusInfo() const {
    return FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo{};
}

UCommonButton* UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::GetButtonAtIndex(int32 Index) const {
    return NULL;
}

int32 UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::FindButtonIndex(UCommonButton* Button) const {
    return 0;
}

UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase() {
}

