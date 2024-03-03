#include "FortColorPickerConfiguration.h"

UFortColorPickerConfiguration::UFortColorPickerConfiguration() {
    this->bNoColorOptionAvailable = false;
    this->ColorPickerType = EColorPickerType::Swatches;
    this->bInitializeCustomColorFromSelectedSwatch = false;
    this->CustomColorRepresentation = EColorPickerColorRepresentation::HSV;
}

