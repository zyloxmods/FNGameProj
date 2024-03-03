#include "FortTeamMemberInfo.h"

FFortTeamMemberInfo::FFortTeamMemberInfo() {
    this->bPartyLeader = false;
    this->bIsInZone = false;
    this->bHasBoostXp = false;
    this->bHasRestXp = false;
    this->bBattlePassPurchased = false;
    this->BattlePassLevel = 0;
    this->BattlePassSelfXpBoost = 0;
    this->BattlePassFriendXpBoost = 0;
    this->NumPlayersInParty = 0;
    this->PlayerIndex = 0;
    this->TeamAffiliation = 0;
    this->HeroXP = 0;
    this->HeroItem = NULL;
}

