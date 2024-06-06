#include "DeployableBaseSupportSettings.h"

FDeployableBaseSupportSettings::FDeployableBaseSupportSettings() {
    bUseDeployableBases = false;
    bDeployableBasesReadOnly = false;
    SupportedUseType = EDeployableBaseUseType::Neighborhood;
}

