#include "FortAthenaLivingWorldEvent.h"

FFortAthenaLivingWorldEvent::FFortAthenaLivingWorldEvent() {
    this->Weight = 1;
    this->bOnlyInSafeZone = false;
    this->ActivationGamePhaseStep = EAthenaGamePhaseStep::None;
    this->ActivationSafeZoneIndex = 0;
    this->ActivationMinDelay = 1;
    this->ActivationMaxDelay = 1;
}

