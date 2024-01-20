#include "FortItemCategoryIndicator.h"

void UFortItemCategoryIndicator::SetOrdinalOfCategoryToRepresent(const EFortItemCategoryOrdinal ItemCategoryOrdinal) {
}

void UFortItemCategoryIndicator::SetLabelColorOverride(const FLinearColor InLabelColorOverride) {
}

void UFortItemCategoryIndicator::SetItemToRepresent(const UFortItem* NewItemToRepresent) {
}

void UFortItemCategoryIndicator::ClearLabelColorOverride() {
}

UFortItemCategoryIndicator::UFortItemCategoryIndicator() {
    this->OrdinalOfCategoryToRepresent = EFortItemCategoryOrdinal::Primary;
}

