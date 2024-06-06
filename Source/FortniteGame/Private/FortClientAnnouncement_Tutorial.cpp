#include "FortClientAnnouncement_Tutorial.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_Tutorial::OnRep_TutorialData(const FFortClientAnnouncementData_Tutorial& PreviousTutorialData) {
}

void AFortClientAnnouncement_Tutorial::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Tutorial, TutorialData);
}

AFortClientAnnouncement_Tutorial::AFortClientAnnouncement_Tutorial() {
    AutoContinueDelay = 1;
}

