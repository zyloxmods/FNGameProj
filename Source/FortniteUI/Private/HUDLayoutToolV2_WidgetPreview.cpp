#include "HUDLayoutToolV2_WidgetPreview.h"

void UHUDLayoutToolV2_WidgetPreview::HandleOperationDrop(UDragDropOperation* Operation) {
}

UHUDLayoutToolV2_WidgetPreview::UHUDLayoutToolV2_WidgetPreview() {
    this->CreateHUDWidgetOperation = NULL;
    this->DragDistanceThresholdMillimeters = 1;
    this->TextBlock_InstancesLeftCounter = NULL;
    this->Border_Background = NULL;
}

