#include "FortSafeZoneIndicatorFuture.h"
#include "Net/UnrealNetwork.h"

void AFortSafeZoneIndicatorFuture::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSafeZoneIndicatorFuture, NextNextCenter);
    DOREPLIFETIME(AFortSafeZoneIndicatorFuture, NextNextRadius);
}

AFortSafeZoneIndicatorFuture::AFortSafeZoneIndicatorFuture() {
    NextNextRadius = 1;
}

