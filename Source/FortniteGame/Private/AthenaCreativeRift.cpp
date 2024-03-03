#include "AthenaCreativeRift.h"

void AAthenaCreativeRift::NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


AAthenaCreativeRift::AAthenaCreativeRift() {
    this->DespawnSphereComponent = NULL;
    this->ParentTrap = NULL;
    this->bHasLoadedSettings = false;
}

