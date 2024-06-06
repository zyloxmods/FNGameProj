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
    DisplayWidget = NULL;
    TimeToLive = 1;
    bRetrigger = false;
    bDestroyOnAllClientsStopped = false;
    Channel = EFortAnnouncementChannel::Primary;
    Priority = 0;
    bInterrupt = false;
    ClientDeliveryStatus = EFortAnnouncementDelivery::Created;
    ClientDeliveryTime = 1;
}

