#include "FortItemViewSettings.h"

FFortItemViewSettings::FFortItemViewSettings() {
    UsesPlacementActor = false;
    UsesFixedCamera = false;
    SupportsZooming = false;
    DefaultZoomLevel = 1;
    RotationMode = EFortItemViewRotationMode::None;
}

