#include "FortCosmeticNumericalVariant.h"

UFortCosmeticNumericalVariant::UFortCosmeticNumericalVariant() {
    this->DefaultStartingNumeric = 14;
    this->MinNumericalValue = 0;
    this->MaxNumbericalValue = 99;
    this->ZerosDigitParamName = TEXT("Zero_Digit");
    this->TensDigitParamName = TEXT("Ten_Digit");
}

