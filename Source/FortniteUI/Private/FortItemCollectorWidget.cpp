#include "FortItemCollectorWidget.h"

void UFortItemCollectorWidget::OnItemCollectorValuesChanged_Implementation(UFortWorldItemDefinition* InputItem, int32 Goal, int32 deposit, int32 Captures) {
}

void UFortItemCollectorWidget::OnItemCollectorStateChanged_Implementation(EFortItemCollectorState ItemCollectorState) {
}

void UFortItemCollectorWidget::OnItemCollectorChanged_Implementation(ABuildingItemCollectorActor* OutItemCollector) {
}

UFortItemCollectorWidget::UFortItemCollectorWidget() {
    this->ItemCollector = NULL;
}

