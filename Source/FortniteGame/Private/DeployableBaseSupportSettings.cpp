#include "DeployableBaseSupportSettings.h"

FDeployableBaseSupportSettings::FDeployableBaseSupportSettings() {
    this->bUseDeployableBases = false;
    this->bDeployableBasesReadOnly = false;
    this->SupportedUseType = EDeployableBaseUseType::Neighborhood;
}

