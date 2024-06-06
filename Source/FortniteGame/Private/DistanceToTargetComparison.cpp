#include "DistanceToTargetComparison.h"

FDistanceToTargetComparison::FDistanceToTargetComparison() {
    bUseOverriddenValue = false;
    OverriddenValue = 1;
    Operator = EArithmeticKeyOperation::Equal;
    ComparisonType = ETargetDistanceComparisonType::TwoDimensions;
}

