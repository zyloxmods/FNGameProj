#include "FortGameStateComponent_FrontEndFlowSTW.h"

void UFortGameStateComponent_FrontEndFlowSTW::OnSatelliteAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::OnNameHomebaseAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::HandleClientEvent_HomebasePersonalized() {
}

UFortGameStateComponent_FrontEndFlowSTW::UFortGameStateComponent_FrontEndFlowSTW() {
    this->NameHomebaseAnnouncement = NULL;
    this->SatelliteCinematicAnnouncement = NULL;
    this->BannerWidgetClass = NULL;
}

