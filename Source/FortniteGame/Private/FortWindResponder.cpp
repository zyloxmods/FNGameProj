#include "FortWindResponder.h"

FFortWindResponder::FFortWindResponder() {
    WindUpdatingBuildingSMActor = NULL;
    WindSpeedCurve = NULL;
    WindPannerSpeedCurve = NULL;
    WindAudio = NULL;
    MaterialParameterPairIndices = 0;
    WindSpeed = 1;
    bHasSetupAnimatingMaterials = false;
}

