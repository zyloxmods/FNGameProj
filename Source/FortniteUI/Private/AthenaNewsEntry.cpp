#include "AthenaNewsEntry.h"

FAthenaNewsEntry::FAthenaNewsEntry() {
    this->EntryType = EAthenaNewsEntryType::Text;
    this->SpotLight = false;
    this->bHidden = false;
    this->SubGameFilter = ESubGameFilter::All;
    this->bHasCustomColor = false;
    this->SortingPriority = 0;
    this->ExperimentPercent = 0;
    this->ExperimentId = 0;
    this->OfferAction = EItemShopNavigationAction::None;
    this->NavigateToTabValue = EFortUIFeature::ShowHome;
    this->VideoAutoplay = false;
    this->VideoForceAutoplay = false;
    this->VideoLoop = false;
    this->VideoMute = false;
    this->VideoFullscreen = false;
    this->VideoStreamingEnabled = false;
}

