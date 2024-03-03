#include "HUDWidgetRegistryEntry.h"

FHUDWidgetRegistryEntry::FHUDWidgetRegistryEntry() {
    this->bIsMandatory = false;
    this->MandatoryOnScreenPercent = 1;
    this->MaximumAmountOfInstances = 0;
    this->ZOrder = 0;
    this->HUDWidgetClass = NULL;
    this->HUDWidgetProxyClass = NULL;
    this->HUDWidgetPreviewClass = NULL;
}

