#include "FortAthenaAISpawnerDataComponent_AIBotGameplay.h"

UFortAthenaAISpawnerDataComponent_AIBotGameplay::UFortAthenaAISpawnerDataComponent_AIBotGameplay() {
    NameSettings = NULL;
    bRequiresUniqueNetId = false;
    bOverrideCanRespawnOnDeath = false;
    RespawnSpawnerDataClass = NULL;
    PawnCullDistance = 1;
    ReachLocationValidationMode = EReachLocationValidationMode::None;
    LeashInnerRadius = 1;
    LeashOuterRadius = 1;
    bCanInvestigateWithMeleeWeapon = false;
    bApplyMutatorsHealthAndShieldModifiers = true;
}

