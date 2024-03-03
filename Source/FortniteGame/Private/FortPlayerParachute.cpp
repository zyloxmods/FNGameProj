#include "FortPlayerParachute.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Particles/ParticleSystemComponent.h"
#include "FortGliderAudioComponent.h"
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

UFXSystemComponent* AFortPlayerParachute::GetTrailVFXComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerParachute::GetTrailVFX2Component() const {
    return NULL;
}

USkeletalMeshComponent* AFortPlayerParachute::GetParachuteRootMesh() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerParachute::GetFortPlayerPawn() const {
    return NULL;
}

void AFortPlayerParachute::DisableTrailParticles() {
}

void AFortPlayerParachute::ApplyVariants() {
}

void AFortPlayerParachute::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerParachute, PlayerPawn);
    DOREPLIFETIME(AFortPlayerParachute, ParachuteItemDef);
}

AFortPlayerParachute::AFortPlayerParachute() {
    this->CurrentGliderOpenSound = NULL;
    this->CurrentGliderCloseSound = NULL;
    this->FortLayeredAudioComponentGlider = CreateDefaultSubobject<UFortGliderAudioComponent>(TEXT("FortLayeredAudioComponent0"));
    this->PlayerPawn = NULL;
    this->ParachuteItemDef = NULL;
    this->ParachuteHiddenAnimFinishTime = 1;
    this->bGliderFullyDeployed = false;
    this->bChuteOpened = false;
    this->bIsFrontEndPreview = false;
    this->bParachuteVisible = false;
    this->bActivateTrailOnRationalMovement = true;
    this->ParachuteTrailParameterName = TEXT("Moving");
    this->IsCosmeticPreview = false;
    this->bIsEtherealBackgroundPreview = false;
    this->TrailVFX = NULL;
    this->TrailVFX2 = NULL;
    this->ParachuteMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("ParachuteMesh0"));
    this->TrailParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParachuteTrails0"));
    this->CurrentGliderPlayerAnimSet = NULL;
    this->bUsesDayPhaseChange = false;
}

