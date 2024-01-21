#include "FortTheaterSelect.h"



bool UFortTheaterSelect::GetTheaterRecommendedRatingRange(const FString& UniqueId, int32& Minimum, int32& Maximum) const {
    return false;
}

bool UFortTheaterSelect::GetSurvivalCMSText(FText& Title, FText& Body) const {
    return false;
}

UFortTheaterSelect::UFortTheaterSelect() {
    this->OverlayMain = NULL;
}

