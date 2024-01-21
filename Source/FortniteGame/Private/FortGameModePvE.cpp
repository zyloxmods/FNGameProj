#include "FortGameModePvE.h"

void AFortGameModePvE::SetIdleKickEnabled(bool bEnabled) {
}

void AFortGameModePvE::RemoveAllowIdlePlayerLocation(AActor* LocationActor) {
}

void AFortGameModePvE::HandleOnAircraftRegistered(const AFortAircraft* InAircraft) {
}

void AFortGameModePvE::AddAllowIdlePlayerLocation(AActor* LocationActor, float Radius) {
}

AFortGameModePvE::AFortGameModePvE() {
    this->MaxIdleTimeWhileSuspicious = 180.00f;
    this->IdleNotificationInterval = 60.00f;
    this->bOnlyIdleKickPublicMatches = true;
    this->bIdleFlag = false;
    this->IdleCheck = 9;
    this->IdleCheck2 = 9;
    this->IdleConditionVar = 3000.00f;
    this->bIdleKickEnabled = true;
    this->bWaitForAircraft = false;
}

