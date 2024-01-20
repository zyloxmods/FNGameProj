#include "DistanceToTargetComparison.h"

FDistanceToTargetComparison::FDistanceToTargetComparison() {
    this->bUseOverriddenValue = false;
    this->OverriddenValue = 0.00f;
    this->Operator = EArithmeticKeyOperation::Equal;
    this->ComparisonType = ETargetDistanceComparisonType::TwoDimensions;
}

