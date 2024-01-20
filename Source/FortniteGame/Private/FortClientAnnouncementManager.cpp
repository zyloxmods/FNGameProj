#include "FortClientAnnouncementManager.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncementManager::OnRep_ClientAnnouncements(TArray<AFortClientAnnouncement*>& PreviousClientAnnouncements) {
}

void AFortClientAnnouncementManager::OnRep_CancelledAnnouncements() {
}

void AFortClientAnnouncementManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncementManager, ClientAnnouncements);
    DOREPLIFETIME(AFortClientAnnouncementManager, CancelledAnnouncements);
}

AFortClientAnnouncementManager::AFortClientAnnouncementManager() {
}

