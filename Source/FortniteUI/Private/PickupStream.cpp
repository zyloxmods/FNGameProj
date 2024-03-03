#include "PickupStream.h"


void UPickupStream::HandleItemPickedUp(UFortWorldItem* WorldItem, int32 Count) {
}

UPickupStream::UPickupStream() {
    this->MaxDisplayedItems = 0;
    this->PickupEntryWidgetClass = NULL;
    this->ExpirationTime = 1;
    this->VerticalBox_PickupMessages = NULL;
}

