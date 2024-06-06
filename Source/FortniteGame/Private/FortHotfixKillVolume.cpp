#include "FortHotfixKillVolume.h"
#include "Components/BoxComponent.h"

void AFortHotfixKillVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortHotfixKillVolume::CopyToClipboard() {
}

AFortHotfixKillVolume::AFortHotfixKillVolume() {
    KillBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("KillBox0"));
}

