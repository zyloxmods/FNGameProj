#include "BuildingGameplayActorPetrol.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void ABuildingGameplayActorPetrol::UpdateCurrentSize() {
}

void ABuildingGameplayActorPetrol::OnRep_ProjectileCount(int32 PrevProjectileCount) {
}

void ABuildingGameplayActorPetrol::OnRep_PrevPetrol() {
}

void ABuildingGameplayActorPetrol::OnRep_Ignited(bool bPrevIgnited) {
}



void ABuildingGameplayActorPetrol::IgniteTimerExpired() {
}

float ABuildingGameplayActorPetrol::GetTargetSize() const {
    return 0.0f;
}

int32 ABuildingGameplayActorPetrol::GetProjectileCount() const {
    return 0;
}

float ABuildingGameplayActorPetrol::GetCurrentSize() const {
    return 0.0f;
}


void ABuildingGameplayActorPetrol::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorPetrol, PrevPetrol);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, ImpactDirection);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, bIgnited);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, ProjectileCount);
}

ABuildingGameplayActorPetrol::ABuildingGameplayActorPetrol() {
    this->SphereCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("NewUSphereComponent"));
    this->MaterialInstanceDynamic = NULL;
    this->SplatterDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("NewSplatterDecalComponent"));
    this->DamageEffectClass = NULL;
    this->IgniteRange = 1;
    this->DamageRange = 1;
    this->CurrentSize = 1;
    this->bIgnited = false;
    this->ProjectileCount = 0;
    this->SplatterMinDecalWidth = 1;
    this->SplatterMaxDecalWidth = 1;
}

