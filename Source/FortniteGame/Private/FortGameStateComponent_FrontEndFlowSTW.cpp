#include "FortGameStateComponent_FrontEndFlowSTW.h"

void UFortGameStateComponent_FrontEndFlowSTW::OnSatelliteAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::OnNameHomebaseAnnouncementEnded(AFortClientAnnouncement* Announcement) {
}

void UFortGameStateComponent_FrontEndFlowSTW::HandleClientEvent_HomebasePersonalized() {
}

UFortGameStateComponent_FrontEndFlowSTW::UFortGameStateComponent_FrontEndFlowSTW() {
    NameHomebaseAnnouncement = NULL;
    SatelliteCinematicAnnouncement = NULL;
    BannerWidgetClass = NULL;
}

