#include "FortLevelIndicator.h"

void UFortLevelIndicator::SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel) {
}

void UFortLevelIndicator::SetItemToRepresent(UFortItem* NewItemToRepresent) {
}

void UFortLevelIndicator::SetItemForComparison(UFortItem* NewItemForComparison) {
}

void UFortLevelIndicator::HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}

void UFortLevelIndicator::HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}

UFortLevelIndicator::UFortLevelIndicator() {
    this->ShouldShowLabel = false;
    this->TextStyle = NULL;
    this->ShouldShowMaximumLevel = false;
    this->CurrentLevel = 0;
    this->MaximumLevel = 0;
    this->IsComparingLevels = false;
    this->ComparisonResultIndicatorSize = EFortBrushSize::VeryVerySmall;
    this->CurrentLevelForComparison = 0;
    this->MaximumLevelForComparison = 0;
    this->LabelTextBlock = NULL;
    this->CurrentLevelNumericTextBlock = NULL;
    this->DivisionOperatorTextBlock = NULL;
    this->MaximumLevelNumericTextBlock = NULL;
}

