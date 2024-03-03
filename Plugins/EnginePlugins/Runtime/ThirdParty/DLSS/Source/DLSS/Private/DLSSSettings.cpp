#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->NVIDIANGXApplicationId = 0;
    this->bProductionBinariesExists = false;
    this->bNonProductionBinariesExists = false;
    this->bEnableNonProductionBinariesInShipping = false;
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
}

