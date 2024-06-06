#include "AthenaHoldingArea.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AAthenaHoldingArea::OnRep_IgnoredPlayerPawns() {
}

void AAthenaHoldingArea::OnRep_bHoldingAreaActive() {
}

void AAthenaHoldingArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaHoldingArea, bHoldingAreaActive);
    DOREPLIFETIME(AAthenaHoldingArea, IgnoredPlayerPawns);
}

AAthenaHoldingArea::AAthenaHoldingArea() {
    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    bHoldingAreaActive = false;
}

