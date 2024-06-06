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
    CurrentGliderOpenSound = NULL;
    CurrentGliderCloseSound = NULL;
    FortLayeredAudioComponentGlider = CreateDefaultSubobject<UFortGliderAudioComponent>(TEXT("FortLayeredAudioComponent0"));
    PlayerPawn = NULL;
    ParachuteItemDef = NULL;
    ParachuteHiddenAnimFinishTime = 1;
    bGliderFullyDeployed = false;
    bChuteOpened = false;
    bIsFrontEndPreview = false;
    bParachuteVisible = false;
    bActivateTrailOnRationalMovement = true;
    ParachuteTrailParameterName = TEXT("Moving");
    IsCosmeticPreview = false;
    bIsEtherealBackgroundPreview = false;
    TrailVFX = NULL;
    TrailVFX2 = NULL;
    ParachuteMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("ParachuteMesh0"));
    TrailParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParachuteTrails0"));
    CurrentGliderPlayerAnimSet = NULL;
    bUsesDayPhaseChange = false;
}

