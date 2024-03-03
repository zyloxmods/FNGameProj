#include "FortWindImpulseCylinderRadial.h"

FFortWindImpulseCylinderRadial::FFortWindImpulseCylinderRadial() {
    this->InnerRadius = 1;
    this->OuterRadius = 1;
    this->Magnitude = 1;
    this->bIsChanging = false;
    this->bIsChangePending = false;
}

