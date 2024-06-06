#include "FortHotfixBlockingVolume.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

void AFortHotfixBlockingVolume::OnRep_ReplicatedExtent() {
}

void AFortHotfixBlockingVolume::CopyToClipboard() {
}

void AFortHotfixBlockingVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHotfixBlockingVolume, ReplicatedExtent);
}

AFortHotfixBlockingVolume::AFortHotfixBlockingVolume() {
    BlockBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockBox0"));
    bNeededOnClient = true;
}

