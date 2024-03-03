#include "AthenaRespawnTimer.h"



void UAthenaRespawnTimer::HandleStartedRespawn(AFortPlayerControllerZone* PlayerController) {
}


void UAthenaRespawnTimer::AddExtensionWidget(UWidget* Widget) {
}

UAthenaRespawnTimer::UAthenaRespawnTimer() {
    this->MinUpdateTime = 1;
    this->CreativeMinUpdateTime = 1;
    this->Text_Time = NULL;
}

