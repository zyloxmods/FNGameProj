#include "FortRestedXpBoosterToken.h"

UFortRestedXpBoosterToken::UFortRestedXpBoosterToken(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ProfileType = EItemProfileType::Common;
    RestedXpAmountToGrant = 0;
    bRequiresBattlePass = true;
}

