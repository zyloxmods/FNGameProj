#include "AthenaQuickBarNativeCell.h"

void UAthenaQuickBarNativeCell::SetItemToRepresent(UFortItem* InItemToRepresent) {
}

void UAthenaQuickBarNativeCell::SetIsSelected(bool bInSelected) {
}

void UAthenaQuickBarNativeCell::DesiredSizeOverride(float WidthOverride, float HeightOverride) {
}

UAthenaQuickBarNativeCell::UAthenaQuickBarNativeCell() {
    this->SelectionAnimLength_Seconds = 1;
    this->ItemCount_OutlineAlphaFactor = 1;
    this->GadgetFuelChargeCount_OutlineAlphaFactor = 1;
    this->bShowSelectedWhenEmpty = false;
    this->bSupportsWideItems = false;
}

