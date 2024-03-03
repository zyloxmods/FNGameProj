#include "FortReplayHighlightsWindow.h"

void UFortReplayHighlightsWindow::HandleReplayHighlightsAvailable(AFortReplaySpectator* Sender, bool bIsAvailable) {
}

void UFortReplayHighlightsWindow::HandleHighlightItemPlayEvent(UFortReplayHighlightItemBase* Sender) {
}

UFortReplayHighlightsWindow::UFortReplayHighlightsWindow() {
    this->HighlightItemClass = NULL;
    this->VerticalBox_ItemContainer = NULL;
}

