#include "FortClientAnnouncement_ZoneModifiers.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_ZoneModifiers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_ZoneModifiers, DisplayTime);
    DOREPLIFETIME(AFortClientAnnouncement_ZoneModifiers, ModifiersData);
}

AFortClientAnnouncement_ZoneModifiers::AFortClientAnnouncement_ZoneModifiers() {
    DisplayTime = 1;
}

