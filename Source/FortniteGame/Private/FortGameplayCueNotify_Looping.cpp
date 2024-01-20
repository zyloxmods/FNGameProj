#include "FortGameplayCueNotify_Looping.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"





USceneComponent* AFortGameplayCueNotify_Looping::GetTargetComponent(AActor* TargetActor, const FGameplayCueParameters& Parameters) const {
    return NULL;
}

bool AFortGameplayCueNotify_Looping::GetSpawnTransform(AActor* TargetActor, FName AttachPointName, const FGameplayCueParameters& Parameters, FTransform& OutTransform) const {
    return false;
}

AFortGameplayCueNotify_Looping::AFortGameplayCueNotify_Looping() {
    this->StartSound = NULL;
    this->StopSound = NULL;
    this->StartParticleSystem = NULL;
    this->StopParticleSystem = NULL;
    this->bStayAttached = true;
    this->bSnapToAttachPointAndPreserveWorldRotation = false;
    this->bUseHitResult = false;
    this->bUseWeapon = false;
    this->bIgnoreRotation = false;
    this->PoolingMethod = EPSCPoolMethod::AutoRelease;
    this->bIsValid = true;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
}

