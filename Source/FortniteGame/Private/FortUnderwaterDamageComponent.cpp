#include "FortUnderwaterDamageComponent.h"

void UFortUnderwaterDamageComponent::SetUnderWater(bool bNewUnderWater) {
}

UFortUnderwaterDamageComponent::UFortUnderwaterDamageComponent() {
    this->GE_UnderwaterDamage = NULL;
    this->bIsUnderWater = false;
    this->UnderWaterStartTime = 1;
    this->CurrentLevel = 0;
    this->bResetFromDBNO = false;
}

