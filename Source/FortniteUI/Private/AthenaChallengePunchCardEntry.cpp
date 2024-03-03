#include "AthenaChallengePunchCardEntry.h"







void UAthenaChallengePunchCardEntry::OnFinishedPlacingEntry() {
}

UAthenaChallengePunchCardEntry::UAthenaChallengePunchCardEntry() {
    this->IconParamName = TEXT("ItemIcon");
    this->SlotIndex = 0;
    this->bIsBeingPlaced = false;
    this->Text_RewardQuantity = NULL;
    this->Text_UnlockDate = NULL;
    this->LazyImage_Stamp = NULL;
}

