#include "SliderSettings.h"

FSliderSettings::FSliderSettings() {
    this->MinIntegralDigits = 0;
    this->MaxIntegralDigits = 0;
    this->MinFractionalDigits = 0;
    this->MaxFractionalDigits = 0;
    this->MinSensitivityValue = 0.00f;
    this->MaxSensitivityValue = 0.00f;
    this->StepSize = 0.00f;
    this->RoundingMode = HalfToEven;
}

