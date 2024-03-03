#include "FortItemRatingIndicator.h"

void UFortItemRatingIndicator::SetItemViewContext(TScriptInterface<IFortItemViewContextInterface> ItemViewContext) {
}

void UFortItemRatingIndicator::SetItemToRepresent(const UFortItem* NewItemToRepresent) {
}

void UFortItemRatingIndicator::SetItemToCompareWith(const UFortItem* NewItemToCompareWith) {
}


UFortItemRatingIndicator::UFortItemRatingIndicator() {
    this->RatingValue = 0;
    this->ComparisonResult = EFortBuffState::NoChange;
    this->ShouldAppearEnchanted = false;
}

