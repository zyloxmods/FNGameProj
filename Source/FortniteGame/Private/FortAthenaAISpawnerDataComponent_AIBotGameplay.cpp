#include "FortAthenaAISpawnerDataComponent_AIBotGameplay.h"

UFortAthenaAISpawnerDataComponent_AIBotGameplay::UFortAthenaAISpawnerDataComponent_AIBotGameplay() {
    this->NameSettings = NULL;
    this->bRequiresUniqueNetId = false;
    this->bOverrideCanRespawnOnDeath = false;
    this->RespawnSpawnerDataClass = NULL;
    this->PawnCullDistance = 1;
    this->ReachLocationValidationMode = EReachLocationValidationMode::None;
    this->LeashInnerRadius = 1;
    this->LeashOuterRadius = 1;
    this->bCanInvestigateWithMeleeWeapon = false;
    this->bApplyMutatorsHealthAndShieldModifiers = true;
}

