#include "FortItemViewSettings.h"

FFortItemViewSettings::FFortItemViewSettings() {
    this->UsesPlacementActor = false;
    this->UsesFixedCamera = false;
    this->SupportsZooming = false;
    this->DefaultZoomLevel = 1;
    this->RotationMode = EFortItemViewRotationMode::None;
}

