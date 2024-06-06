#include "FortTeamMemberInfo.h"

FFortTeamMemberInfo::FFortTeamMemberInfo() {
    bPartyLeader = false;
    bIsInZone = false;
    bHasBoostXp = false;
    bHasRestXp = false;
    bBattlePassPurchased = false;
    BattlePassLevel = 0;
    BattlePassSelfXpBoost = 0;
    BattlePassFriendXpBoost = 0;
    NumPlayersInParty = 0;
    PlayerIndex = 0;
    TeamAffiliation = 0;
    HeroXP = 0;
    HeroItem = NULL;
}

