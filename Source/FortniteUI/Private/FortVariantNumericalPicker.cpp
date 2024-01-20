#include "FortVariantNumericalPicker.h"

UFortVariantNumericalPicker::UFortVariantNumericalPicker() {
    this->MinNum = 0;
    this->MaxNum = 0;
    this->NumericDelta = 0;
    this->CurrentNumber = 0;
    this->NumericalVariant = NULL;
    this->Button_ZeroDigitUp = NULL;
    this->Button_ZeroDigitDown = NULL;
    this->Button_TenDigitUp = NULL;
    this->Button_TenDigitDown = NULL;
    this->Text_NumericalValue = NULL;
    this->Text_VariantName = NULL;
}

