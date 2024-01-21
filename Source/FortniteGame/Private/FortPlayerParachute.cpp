#include "FortPlayerParachute.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerParachute::SetChuteMeshVisibility(bool bParachuteVisiblity) {
}

void AFortPlayerParachute::OnRep_PlayerPawn() {
}

void AFortPlayerParachute::OnRep_ParachuteItemDef() {
}


void AFortPlayerParachute::OnParachuteTrailUpdated_Implementation(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration) {
}


bool AFortPlayerParachute::IsGliderFullyDeployedAccordingToAnim() const {
    return false;
}

void AFortPlayerParachute::InitalizeFromItemDef(const UAthenaGliderItemDefinition* InParachuteItemDef, bool bSynchronousLoad) {
}

USkeletalMeshComponent* AFortPlayerParachute::GetParachuteRootMesh() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerParachute::GetFortPlayerPawn() const {
    return NULL;
}

void AFortPlayerParachute::DisableTrailParticles() {
}

void AFortPlayerParachute::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerParachute, PlayerPawn);
    DOREPLIFETIME(AFortPlayerParachute, ParachuteItemDef);
}

AFortPlayerParachute::AFortPlayerParachute() {
    this->CurrentGliderOpenSound = NULL;
    this->CurrentGliderCloseSound = NULL;
    this->PlayerPawn = NULL;
    this->ParachuteItemDef = NULL;
    this->ParachuteHiddenAnimFinishTime = 1.20f;
    this->bGliderFullyDeployed = false;
    this->bChuteOpened = false;
    this->bIsFrontEndPreview = false;
    this->bParachuteVisible = false;
    this->bActivateTrailOnRationalMovement = true;
    this->ParachuteTrailParameterName = TEXT("Moving");
    this->IsCosmeticPreview = false;
    this->ParachuteMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("ParachuteMesh0"));
    this->TrailParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParachuteTrails0"));
}

