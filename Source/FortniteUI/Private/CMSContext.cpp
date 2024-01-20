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

FSubgameScreenSource UCMSContext::GetLatestSubgameInfo() {
    return FSubgameScreenSource{};
}

FKoreanCafeSource UCMSContext::GetLatestPCBInfo() {
    return FKoreanCafeSource{};
}

FAthenaNews UCMSContext::GetLatestNews() {
    return FAthenaNews{};
}

FAthenaNewsEntry UCMSContext::GetLatestEmergencyNotice() {
    return FAthenaNewsEntry{};
}

FCreativeAdSource UCMSContext::GetLatestCreativeAds() {
    return FCreativeAdSource{};
}

UCMSContext::UCMSContext() {
    this->CMSSurveyDataSource = NULL;
}

