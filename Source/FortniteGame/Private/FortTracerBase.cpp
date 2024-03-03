#include "FortTracerBase.h"
#include "Components/StaticMeshComponent.h"
#include "MovementComp_Tracer.h"

void AFortTracerBase::Init(const FVector& Start, const FVector& End) {
}

AFortTracerBase::AFortTracerBase() {
    this->TracerMovementComponent = CreateDefaultSubobject<UMovementComp_Tracer>(TEXT("TracerComp0"));
    this->TracerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TracerMesh0"));
    this->BulletWhipTrackerComponent = NULL;
    this->SpeedScaleMinRange = 1;
    this->SpeedScaleMaxRange = 1;
    this->SpeedScaleMinMultiplier = 1;
    this->SpeedScaleMaxMultiplier = 1;
    this->MeshScaleTime = 1;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bScaleOnDeath = true;
    this->bScaleSpeed = true;
    this->bScaledUp = false;
    this->bDead = false;
    this->bOwnedByPool = false;
    this->currentScale = 1;
}

