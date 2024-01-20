#include "FortItemBaseWidget.h"

bool UFortItemBaseWidget::SetItemQuantityPairToRepresent(FFortItemQuantityPair InItemQuantityPair) {
    return false;
}

void UFortItemBaseWidget::SetItemDefinitionToRepresent(UFortItemDefinition* InItemDefinition) {
}



void UFortItemBaseWidget::HandleItemCountChanged(UFortItemDefinition* Definition, int32 Delta) {
}

int32 UFortItemBaseWidget::GetQuantity() const {
    return 0;
}

UFortItemDefinition* UFortItemBaseWidget::GetItemDefinition() const {
    return NULL;
}

UFortItemBaseWidget::UFortItemBaseWidget() {
    this->ItemDefinition = NULL;
}

