#include "FortMatchmakingKnobsSpinnerButton.h"



void UFortMatchmakingKnobsSpinnerButton::OnSelectionRotated(int32 Value, bool bUserInitiated) {
}




bool UFortMatchmakingKnobsSpinnerButton::HasMatchingTags(FGameplayTagContainer Tags) {
    return false;
}

FText UFortMatchmakingKnobsSpinnerButton::GetTitleText() const {
    return FText::GetEmpty();
}

FText UFortMatchmakingKnobsSpinnerButton::GetDescription() const {
    return FText::GetEmpty();
}

UFortMatchmakingKnobsSpinnerButton::UFortMatchmakingKnobsSpinnerButton() {
    this->OptionDataObj = NULL;
    this->AssociatedPlayerState = NULL;
    this->RepresentedPlayer = NULL;
    this->CreativeOption = NULL;
    this->DisplayImageMaterial = NULL;
    this->SocialUser = NULL;
    this->SizeBox_TextEntry = NULL;
    this->FilteredTextEntry_Widget = NULL;
    this->TextBlock_OptionDisplayName = NULL;
}

