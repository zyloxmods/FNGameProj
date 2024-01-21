#include "FireModeData.h"

FFireModeData::FFireModeData() {
    this->bAutoFireIsEnabled = false;
    this->b3DTouchEnabled = false;
    this->bTapToShootEnabled = false;
    this->bAlwaysShowDedicatedButton = false;
    this->FireModeType = EFireModeType::Unset;
}

