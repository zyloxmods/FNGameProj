#include "FortClientAnnouncement_Basic.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_Basic::SetTitleText(FText TitleText) {
}

void AFortClientAnnouncement_Basic::SetIcon(FSlateBrush& Icon) {
}

void AFortClientAnnouncement_Basic::SetDisplayTime(float DisplayTime) {
}

void AFortClientAnnouncement_Basic::SetDetailText(FText DetailText) {
}

void AFortClientAnnouncement_Basic::OnRep_BasicData(const FFortClientAnnouncementData_Basic& PreviousBasicData) {
}

void AFortClientAnnouncement_Basic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Basic, BasicData);
}

AFortClientAnnouncement_Basic::AFortClientAnnouncement_Basic() {
}

