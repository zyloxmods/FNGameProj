#include "IndicatedActorData.h"

FIndicatedActorData::FIndicatedActorData() {
    this->Duration = 1;
    this->StepTime = 1;
    this->ShareActorWith = EShareActorWith::None;
    this->bClampToScreen = false;
    this->Sound = NULL;
    this->StateImageOverride = EIndicatorStateImage::Default;
}

