#include "FortWindResponderMaterialVariablePairData.h"

FFortWindResponderMaterialVariablePairData::FFortWindResponderMaterialVariablePairData() {
    this->PreviousSpeed = 1;
    this->PreviousOffset = 1;
    this->MaterialsPreviousTime = 1;
    this->DeltaTimeModifiedByMaterialSpeed = 1;
    this->MaterialVariableIndex = 0;
}

