#include "FortCurieUpdraftActor.h"
#include "Components/CapsuleComponent.h"

void AFortCurieUpdraftActor::OnUpdraftEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortCurieUpdraftActor::OnUpdraftBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFortCurieUpdraftActor::AFortCurieUpdraftActor() {
    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    PlayerPawnVortexLaunchMagnitude = 1;
    PlayerPawnVortexGravityFloorScalar = 1;
    VehicleGravityMultiplier = 1;
    ProjectileGravityMultiplier = 1;
    ProjectileZLaunchMagnitude = 1;
    bGlanceProjectiles = false;
    ProjectileGlanceCurve = NULL;
}

