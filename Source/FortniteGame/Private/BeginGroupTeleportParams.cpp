#include "BeginGroupTeleportParams.h"

FBeginGroupTeleportParams::FBeginGroupTeleportParams() {
    bRespawnPlayers = false;
    bForceKillPlayers = false;
    bAutoReleaseFromStasis = false;
    FadeTime = 1;
    HealthAndShieldResetType = ESynchronizedTeleportHealthAndShieldResetType::None;
    bResetPlayerInventories = false;
    bRandomizePlayerInventories = false;
    bReinitializePlayerAbilities = false;
    bBlockPickupsDuringTeleport = false;
    bFadeSound = false;
}

