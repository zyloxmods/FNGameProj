#include "FortSquadSlotDetailsPanel.h"

bool UFortSquadSlotDetailsPanel::TryGetItemToPreviewInSlot(UFortItem*& OutItemToPreviewInSlot) const {
    return false;
}

void UFortSquadSlotDetailsPanel::SetScrollWidget() {
}

void UFortSquadSlotDetailsPanel::SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex) {
}

bool UFortSquadSlotDetailsPanel::IsSquadSlotLockedBP() const {
    return false;
}




TArray<EFortSquadSlottingRestrictionReason> UFortSquadSlotDetailsPanel::GetSlottingRestrictionReasons() const {
    return TArray<EFortSquadSlottingRestrictionReason>();
}

UFortItem* UFortSquadSlotDetailsPanel::GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const {
    return NULL;
}

void UFortSquadSlotDetailsPanel::GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const {
}

UFortSquadSlotDetailsPanel::UFortSquadSlotDetailsPanel() {
    this->ItemDetailsPanel = NULL;
}

