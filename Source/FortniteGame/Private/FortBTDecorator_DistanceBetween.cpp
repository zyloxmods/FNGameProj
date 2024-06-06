#include "FortBTDecorator_DistanceBetween.h"

UFortBTDecorator_DistanceBetween::UFortBTDecorator_DistanceBetween() {
    Operator = EArithmeticKeyOperation::LessOrEqual;
    SpecifiedDistance = 1;
    bUseSelf = false;
    bCalculateAs2D = false;
    DistanceCalculationUpdateRate = 1;
}

