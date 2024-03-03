#include "BattlePassRewardInfo.h"

FBattlePassRewardInfo::FBattlePassRewardInfo() {
    this->ItemDef = NULL;
    this->Level = 0;
    this->bIsFree = false;
    this->QuantityRewarded = 0;
    this->UnlockableSource = EBattlePassRewardSource::None;
    this->UnlockableSourceItemDef = NULL;
}

