#include "FortWindResponderMaterialVariablePairData.h"

FFortWindResponderMaterialVariablePairData::FFortWindResponderMaterialVariablePairData() {
    this->PreviousSpeed = 0.00f;
    this->PreviousOffset = 0.00f;
    this->MaterialsPreviousTime = 0.00f;
    this->DeltaTimeModifiedByMaterialSpeed = 0.00f;
    this->MaterialVariableIndex = 0;
}

