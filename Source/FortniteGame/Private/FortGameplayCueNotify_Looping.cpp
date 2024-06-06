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
    StartSound = NULL;
    StopSound = NULL;
    StartParticleSystem = NULL;
    StopParticleSystem = NULL;
    bStayAttached = true;
    bSnapToAttachPointAndPreserveWorldRotation = false;
    bUseHitResult = false;
    bUseWeapon = false;
    bIgnoreRotation = false;
    PoolingMethod = EPSCPoolMethod::None;
    bIsValid = true;
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
}

