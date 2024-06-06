#include "AthenaCreativeRift.h"

void AAthenaCreativeRift::NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


AAthenaCreativeRift::AAthenaCreativeRift() {
    DespawnSphereComponent = NULL;
    ParentTrap = NULL;
    bHasLoadedSettings = false;
}

