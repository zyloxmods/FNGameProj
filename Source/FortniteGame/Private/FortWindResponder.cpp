#include "FortWindResponder.h"

FFortWindResponder::FFortWindResponder() {
    this->WindUpdatingBuildingSMActor = NULL;
    this->WindSpeedCurve = NULL;
    this->WindPannerSpeedCurve = NULL;
    this->WindAudio = NULL;
    this->MaterialParameterPairIndices = 0;
    this->WindSpeed = 0.00f;
    this->bHasSetupAnimatingMaterials = false;
}

