#include "FortHotfixBehaviorVolume.h"
#include "Components/BoxComponent.h"

void AFortHotfixBehaviorVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortHotfixBehaviorVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortHotfixBehaviorVolume::CopyToClipboard() {
}

AFortHotfixBehaviorVolume::AFortHotfixBehaviorVolume() {
    TriggerBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox0"));
}

