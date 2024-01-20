#include "FortBTDecorator_DistanceBetween.h"

UFortBTDecorator_DistanceBetween::UFortBTDecorator_DistanceBetween() {
    this->Operator = EArithmeticKeyOperation::LessOrEqual;
    this->SpecifiedDistance = 0.00f;
    this->bUseSelf = false;
    this->bCalculateAs2D = false;
    this->DistanceCalculationUpdateRate = 0.50f;
}

