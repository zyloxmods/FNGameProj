#include "FortUnderwaterDamageComponent.h"

void UFortUnderwaterDamageComponent::SetUnderWater(bool bNewUnderWater) {
}

UFortUnderwaterDamageComponent::UFortUnderwaterDamageComponent() {
    GE_UnderwaterDamage = NULL;
    bIsUnderWater = false;
    UnderWaterStartTime = 1;
    CurrentLevel = 0;
    bResetFromDBNO = false;
}

