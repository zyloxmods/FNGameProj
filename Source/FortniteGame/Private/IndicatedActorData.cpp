#include "IndicatedActorData.h"

FIndicatedActorData::FIndicatedActorData() {
    Duration = 1;
    StepTime = 1;
    ShareActorWith = EShareActorWith::None;
    bClampToScreen = false;
    Sound = NULL;
    StateImageOverride = EIndicatorStateImage::Default;
}

