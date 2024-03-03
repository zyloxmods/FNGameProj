#include "FortClientAnnouncement.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement::StopClientAnnouncement() {
}



int32 AFortClientAnnouncement::GetPriority() {
    return 0;
}

void AFortClientAnnouncement::CancelClientAnnouncement() {
}

void AFortClientAnnouncement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement, AnnouncementID);
    DOREPLIFETIME(AFortClientAnnouncement, Priority);
    DOREPLIFETIME(AFortClientAnnouncement, bInterrupt);
    DOREPLIFETIME(AFortClientAnnouncement, RecipientControllers);
}

AFortClientAnnouncement::AFortClientAnnouncement() {
    this->DisplayWidget = NULL;
    this->TimeToLive = 1;
    this->bRetrigger = false;
    this->bDestroyOnAllClientsStopped = false;
    this->Channel = EFortAnnouncementChannel::Primary;
    this->Priority = 0;
    this->bInterrupt = false;
    this->ClientDeliveryStatus = EFortAnnouncementDelivery::Created;
    this->ClientDeliveryTime = 1;
}

