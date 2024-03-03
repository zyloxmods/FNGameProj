#include "AthenaAIServiceLoot.h"

void UAthenaAIServiceLoot::UpdateSupplyDropStatus() {
}

void UAthenaAIServiceLoot::UpdateMovingLoots() {
}

void UAthenaAIServiceLoot::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

UAthenaAIServiceLoot::UAthenaAIServiceLoot() {
    this->CachedWorldItem = NULL;
    this->BotBuildingContainerBlacklistDataTable = NULL;
}

