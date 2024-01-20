#include "AthenaMatchSetStatView.h"

UAthenaSeasonStats* UAthenaMatchSetStatView::GetOwningSeason() {
    return NULL;
}

TArray<UAthenaMatchStatView*> UAthenaMatchSetStatView::GetBestMatchViews() const {
    return TArray<UAthenaMatchStatView*>();
}

UAthenaMatchSetStatView::UAthenaMatchSetStatView() {
    this->OwningSeason = NULL;
}

