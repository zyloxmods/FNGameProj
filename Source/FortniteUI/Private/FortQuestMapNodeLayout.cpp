#include "FortQuestMapNodeLayout.h"

void UFortQuestMapNodeLayout::SetParentScreen(UFortQuestMapScreen* Parent) {
}

void UFortQuestMapNodeLayout::SetLayoutPanel(UPanelWidget* Value) {
}

void UFortQuestMapNodeLayout::HandleQuestIndexSelectionModelIndexChanged() {
}

void UFortQuestMapNodeLayout::HandleQuestButtonSelected(UCommonButton* SelectedQuestButton, int32 ButtonIndex) {
}

FFortQuestMapPage UFortQuestMapNodeLayout::GetQuestPageData() const {
    return FFortQuestMapPage{};
}

void UFortQuestMapNodeLayout::DisposeLayout() {
}

UFortQuestMapNodeLayout::UFortQuestMapNodeLayout() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonPrevious = NULL;
    this->ButtonNext = NULL;
    this->StartArrow = NULL;
    this->EndArrow = NULL;
    this->LayoutPanel = NULL;
    this->QuestButtonGroup = NULL;
    this->ParentScreen = NULL;
}

