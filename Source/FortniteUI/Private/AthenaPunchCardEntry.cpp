#include "AthenaPunchCardEntry.h"



void UAthenaPunchCardEntry::OnFinishedPlacingNewMedal() {
}

UAthenaPunchCardEntry::UAthenaPunchCardEntry() {
    this->Index = 0;
    this->bDisableFinishPlacementDelegate = false;
    this->Text_RewardQuantity = NULL;
    this->Text_RewardQuantity_Recap = NULL;
}

