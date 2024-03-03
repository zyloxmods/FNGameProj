#include "BattlePassViewRewardData.h"

UBattlePassViewRewardData::UBattlePassViewRewardData() {
    this->Reward = NULL;
    this->bIsFreeItem = false;
    this->bIsOwned = false;
    this->UnlockableSource = EBattlePassRewardSource::None;
    this->UnlockableSourceItemDef = NULL;
    this->ItemLevel = 0;
}

