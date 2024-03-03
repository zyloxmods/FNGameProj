#include "NitrogenTraversePoint.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ANitrogenTraversePoint::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}



ANitrogenTraversePoint::ANitrogenTraversePoint() {
    this->CurrentNitrogenTraversePointMode = ENitrogenTraversePointMode::Pickup;
    this->SceneRoot = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SceneRoot"));
    this->FareRadiusParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FareRadiusParticleSystemComponent"));
    this->TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));
    this->HideActorDelay = 1;
}

