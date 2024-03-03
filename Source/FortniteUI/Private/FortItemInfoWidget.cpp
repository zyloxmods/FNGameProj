#include "FortItemInfoWidget.h"


void UFortItemInfoWidget::PopulateUsingItemDefinition(UFortItemDefinition* NewItem) {
}

void UFortItemInfoWidget::PopulateUsingItem(UFortItem* NewItem) {
}

UFortItemInfoWidget::UFortItemInfoWidget() {
    this->Text_Name = NULL;
    this->Text_ItemType = NULL;
    this->Text_Desc = NULL;
    this->Overlay_MainView = NULL;
}

