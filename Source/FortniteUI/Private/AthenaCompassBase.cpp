#include "AthenaCompassBase.h"

void UAthenaCompassBase::BindToModel(UAthenaPlayerViewModel* ViewModel) {
}

UAthenaCompassBase::UAthenaCompassBase() {
    this->CompassMaterial = NULL;
    this->MarkerVerticalOffset = 0.00f;
    this->VM = NULL;
}

