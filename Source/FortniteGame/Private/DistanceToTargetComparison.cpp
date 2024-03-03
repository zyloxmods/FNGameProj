#include "DistanceToTargetComparison.h"

FDistanceToTargetComparison::FDistanceToTargetComparison() {
    this->bUseOverriddenValue = false;
    this->OverriddenValue = 1;
    this->Operator = EArithmeticKeyOperation::Equal;
    this->ComparisonType = ETargetDistanceComparisonType::TwoDimensions;
}

