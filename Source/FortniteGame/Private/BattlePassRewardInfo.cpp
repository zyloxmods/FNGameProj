#include "BattlePassRewardInfo.h"

FBattlePassRewardInfo::FBattlePassRewardInfo() {
    ItemDef = NULL;
    Level = 0;
    bIsFree = false;
    QuantityRewarded = 0;
    UnlockableSource = EBattlePassRewardSource::None;
    UnlockableSourceItemDef = NULL;
}

