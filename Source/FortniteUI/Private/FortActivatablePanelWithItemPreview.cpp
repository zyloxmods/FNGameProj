#include "FortActivatablePanelWithItemPreview.h"

void UFortActivatablePanelWithItemPreview::ShowItemDetails() {
}

void UFortActivatablePanelWithItemPreview::OnVaultItemsViewed(const TArray<UFortItem*>& Items) {
}

void UFortActivatablePanelWithItemPreview::OnItemPreviewChanged(AActor* NewPrefab, UFortItem* NewItem) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_7(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_6(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_5(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_4(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_3(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_2(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_1(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::OnCosmeticSpecialActionPressed_0(bool& bPassThrough) {
}

void UFortActivatablePanelWithItemPreview::HideItemDetails() {
}


UFortActivatablePanelWithItemPreview::UFortActivatablePanelWithItemPreview() {
    this->ItemViewObject = NULL;
    this->AllowItemRotation = true;
    this->AllowItemZooming = true;
    this->AutomaticallyRegisterCameraView = true;
    this->OverrideFixedCameras = false;
    this->ActionDataTable = NULL;
    this->AnimationToHideItemInfo = NULL;
    this->bAutoShowDetails = true;
    this->bItemDetailsHidden = true;
    this->HideItemInfoHeaderDurationSecs = 1;
}

