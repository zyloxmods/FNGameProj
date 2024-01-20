#include "AthenaCreativeRift.h"

void AAthenaCreativeRift::NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAthenaCreativeRift::NotifyActorDespawnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAthenaCreativeRift::AAthenaCreativeRift() {
    this->DespawnSphereComponent = NULL;
    this->ParentTrap = NULL;
    this->bHasLoadedSettings = false;
}

