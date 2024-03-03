#include "FortCurieUpdraftActor.h"
#include "Components/CapsuleComponent.h"

void AFortCurieUpdraftActor::OnUpdraftEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortCurieUpdraftActor::OnUpdraftBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFortCurieUpdraftActor::AFortCurieUpdraftActor() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->PlayerPawnVortexLaunchMagnitude = 1;
    this->PlayerPawnVortexGravityFloorScalar = 1;
    this->VehicleGravityMultiplier = 1;
    this->ProjectileGravityMultiplier = 1;
    this->ProjectileZLaunchMagnitude = 1;
    this->bGlanceProjectiles = false;
    this->ProjectileGlanceCurve = NULL;
}

