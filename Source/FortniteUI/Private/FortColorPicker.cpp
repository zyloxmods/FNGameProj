#include "FortColorPicker.h"


void UFortColorPicker::HandleSwatchColorSelected(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}


UFortColorPicker::UFortColorPicker() {
    this->GridPanel_Swatches = NULL;
    this->SwatchTileClass = NULL;
    this->ButtonGroup_Swatches = NULL;
    this->Button_CustomColor = NULL;
    this->Swatch_CustomColor = NULL;
    this->ColorComponent_Component1 = NULL;
    this->ColorComponent_Component2 = NULL;
    this->ColorComponent_Component3 = NULL;
    this->Button_SaveColor = NULL;
    this->Swatch_CustomColorPreview = NULL;
    this->bNullOptionAvailable = false;
    this->bAutoSelectColorOnInitialize = false;
    this->SwatchRowCount = 0;
    this->ColorPickerType = EColorPickerType::Swatches;
    this->bInitializeCustomColorFromSelectedSwatch = false;
    this->CustomColorRepresentation = EColorPickerColorRepresentation::HSV;
    this->HueMaterial = NULL;
    this->SaturationMaterial = NULL;
    this->ValueMaterial = NULL;
}

