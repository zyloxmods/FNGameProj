#include "AthenaChallengePunchCard.h"

void UAthenaChallengePunchCard::UpdateChallengePunchCard(const UFortChallengeBundleItem* Bundle, const UFortQuestItem* CopmpletedQuest) {
}


void UAthenaChallengePunchCard::TryToClearBangState() {
}










UAthenaChallengePunchCard::UAthenaChallengePunchCard() {
    this->MaxPunchesAllowed = 0;
    this->Box_PunchSlots = NULL;
    this->Text_Title = NULL;
    this->Text_Description = NULL;
    this->bInitializedWidgetPool = false;
    this->bBundleIsKnown = false;
    this->bBangShown = false;
}

