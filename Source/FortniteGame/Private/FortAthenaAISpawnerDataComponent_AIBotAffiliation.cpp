#include "FortAthenaAISpawnerDataComponent_AIBotAffiliation.h"

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetSquadID_Implementation(int32& OutSquadId) {
    return false;
}

UFortAthenaAISpawnerDataComponent_AIBotAffiliation::UFortAthenaAISpawnerDataComponent_AIBotAffiliation() {
    this->bOverrideIsAnAthenaGameParticipant = false;
    this->bIsAnAthenaGameParticipant = false;
}

