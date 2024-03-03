#include "FortSquadSlotWidget.h"

void UFortSquadSlotWidget::SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex) {
}

void UFortSquadSlotWidget::SetCardSize(const EFortItemCardSize CardSize) {
}

bool UFortSquadSlotWidget::IsSquadSlotLockedBP() const {
    return false;
}

UFortItem* UFortSquadSlotWidget::GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const {
    return NULL;
}

void UFortSquadSlotWidget::GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const {
}

UFortSquadSlotWidget::UFortSquadSlotWidget() {
    this->ItemCardSize = EFortItemCardSize::XXS;
    this->SlottedItemCard = NULL;
}

