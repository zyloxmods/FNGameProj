#include "WorldTileFoundation.h"
#include "Net/UnrealNetwork.h"

void AWorldTileFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldTileFoundation, NumRotations);
}

AWorldTileFoundation::AWorldTileFoundation() {
    this->NumRotations = 255;
}

