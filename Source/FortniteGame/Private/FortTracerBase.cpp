#include "FortTracerBase.h"
#include "Components/StaticMeshComponent.h"
#include "MovementComp_Tracer.h"

void AFortTracerBase::Init(const FVector& Start, const FVector& End) {
}

AFortTracerBase::AFortTracerBase() {
    TracerMovementComponent = CreateDefaultSubobject<UMovementComp_Tracer>(TEXT("TracerComp0"));
    TracerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TracerMesh0"));
    BulletWhipTrackerComponent = NULL;
    SpeedScaleMinRange = 1;
    SpeedScaleMaxRange = 1;
    SpeedScaleMinMultiplier = 1;
    SpeedScaleMaxMultiplier = 1;
    MeshScaleTime = 1;
    BulletWhipTrackerComponentClass = NULL;
    bScaleOnDeath = true;
    bScaleSpeed = true;
    bScaledUp = false;
    bDead = false;
    bOwnedByPool = false;
    currentScale = 1;
}

