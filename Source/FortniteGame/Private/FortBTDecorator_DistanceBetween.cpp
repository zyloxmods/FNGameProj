#include "FortBTDecorator_DistanceBetween.h"

UFortBTDecorator_DistanceBetween::UFortBTDecorator_DistanceBetween() {
    this->Operator = EArithmeticKeyOperation::LessOrEqual;
    this->SpecifiedDistance = 1;
    this->bUseSelf = false;
    this->bCalculateAs2D = false;
    this->DistanceCalculationUpdateRate = 1;
}

