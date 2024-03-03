#include "FortAthenaAIBotEmoteDigestedSkillSet.h"

UFortAthenaAIBotEmoteDigestedSkillSet::UFortAthenaAIBotEmoteDigestedSkillSet() {
    this->InfiniteEmoteMinDuration = 1;
    this->InfiniteEmoteMaxDuration = 1;
    this->EmotesMaxCount = 0;
    this->DanceOnKillMaxDistanceFromKillSqr = 1;
    this->DanceOnKillMaxTimeFromKill = 1;
    this->DanceOnKillMinTimeFromLastTry = 1;
    this->DanceOnKillChanceToDanceOnBots = 1;
    this->DanceOnKillChanceToDanceOnPlayers = 1;
}

