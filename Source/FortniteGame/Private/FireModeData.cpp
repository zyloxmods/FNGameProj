#include "FireModeData.h"

FFireModeData::FFireModeData() {
    bAutoFireIsEnabled = false;
    b3DTouchEnabled = false;
    bTapToShootEnabled = false;
    bAlwaysShowDedicatedButton = false;
    FireModeType = EFireModeType::Unset;
}

