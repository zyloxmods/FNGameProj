#include "AthenaFeatTimelineListEntry.h"







FGameplayTag UAthenaFeatTimelineListEntry::CalculateSourceTag() const {
    return FGameplayTag{};
}

UAthenaFeatTimelineListEntry::UAthenaFeatTimelineListEntry() {
    this->Panel_FeatInfo = NULL;
    this->Panel_Date = NULL;
    this->SimpleButton_ClickArea = NULL;
    this->Text_FeatName = NULL;
    this->Text_FeatDescription = NULL;
    this->LazyImage_QuestIcon = NULL;
    this->Text_CompletedTime = NULL;
    this->RichText_Date = NULL;
    this->bIsHovered = false;
}

