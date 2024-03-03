#include "CMSContext.h"

void UCMSContext::MarkPlaylistInformationAsViewed() {
}

void UCMSContext::MarkNewsAsViewed() {
}

bool UCMSContext::IsNewPlaylistInformationAvailable() const {
    return false;
}

bool UCMSContext::IsNewNewsAvailable() const {
    return false;
}

bool UCMSContext::GetSurvivalCMSText(FText& Title, FText& Body) const {
    return false;
}

FSubgameScreenSource UCMSContext::GetLatestSubgameInfo() {
    return FSubgameScreenSource{};
}

FKoreanCafeSource UCMSContext::GetLatestPCBInfo() {
    return FKoreanCafeSource{};
}

FAthenaNews UCMSContext::GetLatestNews(bool bGetOnlyMOTDNews) {
    return FAthenaNews{};
}

FAthenaNewsEntry UCMSContext::GetLatestEmergencyNotice() {
    return FAthenaNewsEntry{};
}

FDynamicBackgroundsSource UCMSContext::GetLatestDynamicBackgrounds() const {
    return FDynamicBackgroundsSource{};
}

FAthenaNews UCMSContext::GetLatestCreativeNews(bool bGetOnlyMOTDNews) {
    return FAthenaNews{};
}

FCreativeAdSource UCMSContext::GetLatestCreativeAds() {
    return FCreativeAdSource{};
}

UCMSContext::UCMSContext() {
    this->CMSSurveyDataSource = NULL;
}

