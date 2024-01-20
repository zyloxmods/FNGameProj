#include "FortItemViewSettings.h"

FFortItemViewSettings::FFortItemViewSettings() {
    this->UsesPlacementActor = false;
    this->UsesFixedCamera = false;
    this->SupportsZooming = false;
    this->DefaultZoomLevel = 0.00f;
    this->RotationMode = EFortItemViewRotationMode::None;
}

