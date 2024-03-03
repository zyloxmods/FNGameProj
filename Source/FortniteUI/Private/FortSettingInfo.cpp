#include "FortSettingInfo.h"

UFortSettingInfo::UFortSettingInfo() {
    this->SettingType = ESettingType::None;
    this->SettingWidgetType = NULL;
    this->MinIntegralDigits = 0;
    this->MaxIntegralDigits = 0;
    this->MinFractionalDigits = 0;
    this->MaxFractionalDigits = 0;
    this->StepSize = 1;
    this->MinSensitivityValue = 1;
    this->MaxSensitivityValue = 1;
    this->RoundingMode = HalfToEven;
}

