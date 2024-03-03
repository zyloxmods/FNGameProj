#include "TagVisibility.h"

FTagVisibility::FTagVisibility() {
    this->ComparisonType = ETagComparisonType::HasAny;
    this->Visibility = ESlateVisibility::Visible;
}

