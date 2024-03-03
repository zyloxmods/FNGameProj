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
    this->bIdleKickEnabledByConfig = true;
    this->bIdleKickEnabledByBlueprint = true;
    this->bOnlyIdleKickPublicMatches = false;
    this->bResetDefaultIdleTimeWhenNoLongerSolo = true;
    this->bAnyMovementNotIdleWhilePrivate = true;
    this->bRestrictMaxIdleTime = true;
    this->RestrictedMaxIdleTime = 1;
    this->bSendIdleAnalytics = true;
    this->bWaitForAircraft = false;
    this->bBuildingContainersStartAlreadySearched = false;
    this->bSpawnLootForBuildingContainersThatStartAlreadySearched = false;
    this->bSpawnWeaponsWithMaxPerks = true;
    this->bSpawnTrapsWithMaxPerks = false;
    this->bUseHighPerkSlotValues = false;
}

