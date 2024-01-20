#include "FortQuestMapViewer.h"

void UFortQuestMapViewer::SetQuestMapNodeLayout(UFortQuestMapNodeLayout* Value) {
}



void UFortQuestMapViewer::NavigateToPage(EViewerNavigationDirection Direction) {
}

void UFortQuestMapViewer::NavigateToCurrentQuest() {
}


void UFortQuestMapViewer::HandleQuestIndexSelectionModelIndexChanged() {
}

void UFortQuestMapViewer::HandleLayoutOutroAnimationFinished() {
}

FFortQuestMapPage UFortQuestMapViewer::GetQuestMapData() const {
    return FFortQuestMapPage{};
}

FFortQuestMapPageCosmetics UFortQuestMapViewer::GetQuestMapCosmeticData() const {
    return FFortQuestMapPageCosmetics{};
}

void UFortQuestMapViewer::DisposeQuestMap() {
}

UFortQuestMapViewer::UFortQuestMapViewer() {
    this->CosmeticCanvasPanel = NULL;
    this->FullQuestMap = NULL;
    this->ParentScreen = NULL;
    this->NodeLayout = NULL;
}

