#include "FortPlayerProfileBannerEditor.h"

void UFortPlayerProfileBannerEditor::SetBannerIcon(const FName Icon) {
}

void UFortPlayerProfileBannerEditor::SetBannerColor(const FName Color) {
}

void UFortPlayerProfileBannerEditor::RefreshBannerEditor_Implementation() {
}



void UFortPlayerProfileBannerEditor::HandleEditorDeactivated() {
}

void UFortPlayerProfileBannerEditor::HandleEditorActivated() {
}

void UFortPlayerProfileBannerEditor::CommitChosenIconAndColor() {
}

UFortPlayerProfileBannerEditor::UFortPlayerProfileBannerEditor() {
    this->ProfileToSave = ESaveProfileForBanners::SaveTheWorld;
    this->bCanCloseBannerEditor = true;
    this->Button_CloseEditorButton = NULL;
    this->Button_EditIcon = NULL;
}

