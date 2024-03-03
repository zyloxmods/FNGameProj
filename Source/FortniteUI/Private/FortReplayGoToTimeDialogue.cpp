#include "FortReplayGoToTimeDialogue.h"

void UFortReplayGoToTimeDialogue::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortReplayGoToTimeDialogue::HandleTextChanged(const FText& Text) {
}

void UFortReplayGoToTimeDialogue::HandleReplayTimelineChanged(float StartTime, float EndTime) {
}

UFortReplayGoToTimeDialogue::UFortReplayGoToTimeDialogue() {
    this->EditableText_GoToSeconds = NULL;
    this->Button_Confirm = NULL;
    this->Button_Close = NULL;
    this->Text_HowTo = NULL;
}

