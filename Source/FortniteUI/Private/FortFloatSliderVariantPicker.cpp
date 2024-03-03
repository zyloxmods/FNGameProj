#include "FortFloatSliderVariantPicker.h"


void UFortFloatSliderVariantPicker::HandleSliderValueChanged(float Value) {
}

UFortFloatSliderVariantPicker::UFortFloatSliderVariantPicker() {
    this->CommitDelay = 1;
    this->FloatVariant = NULL;
    this->Text_VariantName = NULL;
    this->Text_Value = NULL;
    this->Slider_Value = NULL;
}

