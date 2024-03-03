#include "FortCreativeMoreInfoPanel.h"




void UFortCreativeMoreInfoPanel::OnPublishComplete(const FString& Result) {
}



void UFortCreativeMoreInfoPanel::InitializeData() {
}

void UFortCreativeMoreInfoPanel::HandlePreviewClicked() {
}

void UFortCreativeMoreInfoPanel::HandleClearClicked() {
}

void UFortCreativeMoreInfoPanel::HandleAcceptClicked() {
}

TArray<FCreativeIslandDescriptionTag> UFortCreativeMoreInfoPanel::GetIslandDescriptionTags() const {
    return TArray<FCreativeIslandDescriptionTag>();
}

UFortCreativeMoreInfoPanel::UFortCreativeMoreInfoPanel() {
    this->bShouldClearName = false;
    this->FilteredTextEntryWidget_Name = NULL;
    this->FilteredTextEntryWidget_0 = NULL;
    this->FilteredTextEntryWidget_1 = NULL;
    this->FilteredTextEntryWidget_2 = NULL;
    this->Button_Apply = NULL;
    this->Button_Preview = NULL;
    this->Button_Clear = NULL;
    this->Hbox_SetPhoto = NULL;
}

