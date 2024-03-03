#include "NitrogenFareDataRepActor.h"
#include "Net/UnrealNetwork.h"

void ANitrogenFareDataRepActor::OnRep_FareRepData() {
}

void ANitrogenFareDataRepActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANitrogenFareDataRepActor, FareRepData);
}

ANitrogenFareDataRepActor::ANitrogenFareDataRepActor() {
}

