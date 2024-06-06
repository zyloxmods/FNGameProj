#include "FortGameModePvE.h"

void AFortGameModePvE::SetIdleKickEnabled(bool bEnabled) {
}

void AFortGameModePvE::SetIdleDetectionScoreThreshold(EFortIdleDetectionState IdleState, int32 InScoreThreshold) {
}

void AFortGameModePvE::SetIdleDetectionPenaltyTime(float InPenaltyTime) {
}

void AFortGameModePvE::SetIdleDetectionMovementDistance(EFortIdleDetectionState IdleState, float InMovementDistance) {
}

void AFortGameModePvE::SetIdleDetectionMinIdleTime(EFortIdleDetectionState IdleState, float InMinIdleTime) {
}

void AFortGameModePvE::SetIdleDetectionMaxIdleTime(EFortIdleDetectionState IdleState, float InMaxIdleTime) {
}

void AFortGameModePvE::RemoveAllowIdlePlayerLocation(AActor* LocationActor) {
}

void AFortGameModePvE::HandleOnAircraftRegistered(const AFortAircraft* InAircraft) {
}

void AFortGameModePvE::AddAllowIdlePlayerLocation(AActor* LocationActor, float Radius) {
}

AFortGameModePvE::AFortGameModePvE() {
    bIdleKickEnabledByConfig = true;
    bIdleKickEnabledByBlueprint = true;
    bOnlyIdleKickPublicMatches = false;
    bResetDefaultIdleTimeWhenNoLongerSolo = true;
    bAnyMovementNotIdleWhilePrivate = true;
    bRestrictMaxIdleTime = true;
    RestrictedMaxIdleTime = 1;
    bSendIdleAnalytics = true;
    bWaitForAircraft = false;
    bBuildingContainersStartAlreadySearched = false;
    bSpawnLootForBuildingContainersThatStartAlreadySearched = false;
    bSpawnWeaponsWithMaxPerks = true;
    bSpawnTrapsWithMaxPerks = false;
    bUseHighPerkSlotValues = false;
}

