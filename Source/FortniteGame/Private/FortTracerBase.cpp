#include "FortTracerBase.h"
#include "Components/StaticMeshComponent.h"
#include "MovementComp_Tracer.h"

void AFortTracerBase::Init(const FVector& Start, const FVector& End) {
}

AFortTracerBase::AFortTracerBase() {
    this->TracerMovementComponent = CreateDefaultSubobject<UMovementComp_Tracer>(TEXT("TracerComp0"));
    this->TracerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TracerMesh0"));
    this->BulletWhipTrackerComponent = NULL;
    this->SpeedScaleMinRange = 2048.00f;
    this->SpeedScaleMaxRange = 5000.00f;
    this->SpeedScaleMinMultiplier = 1.00f;
    this->SpeedScaleMaxMultiplier = 1.50f;
    this->MeshScaleTime = 10.00f;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bScaleOnDeath = true;
    this->bScaleSpeed = true;
    this->bScaledUp = false;
    this->bDead = false;
    this->bOwnedByPool = false;
    this->CurrentScale = 0.00f;
}

