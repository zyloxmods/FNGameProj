#include "FortQuestMapNodeLayout.h"

void UFortQuestMapNodeLayout::HandleQuestIndexSelectionModelIndexChanged() {
}

void UFortQuestMapNodeLayout::HandleQuestButtonSelected(UCommonButton* SelectedQuestButton, int32 ButtonIndex) {
}

UFortQuestMapNodeLayout::UFortQuestMapNodeLayout() : UUserWidget(FObjectInitializer::Get()) {
    this->Panel_NodeLayout = NULL;
    this->ButtonPrevious = NULL;
    this->ButtonNext = NULL;
    this->StartArrow = NULL;
    this->EndArrow = NULL;
    this->QuestButtonGroup = NULL;
    this->ParentScreen = NULL;
}

