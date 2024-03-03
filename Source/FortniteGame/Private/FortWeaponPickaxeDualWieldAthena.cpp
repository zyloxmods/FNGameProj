#include "FortWeaponPickaxeDualWieldAthena.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"

void AFortWeaponPickaxeDualWieldAthena::SetCurrentSwingState(EFortDualWieldSwingState NewState) {
}

void AFortWeaponPickaxeDualWieldAthena::OnRep_WieldStance() {
}

EFortDualWieldStance AFortWeaponPickaxeDualWieldAthena::GetWieldStance() const {
    return EFortDualWieldStance::TwoPicksInUse;
}

USkeletalMeshComponentBudgeted* AFortWeaponPickaxeDualWieldAthena::GetWeaponMeshOffhand() const {
    return NULL;
}

bool AFortWeaponPickaxeDualWieldAthena::GetUseAnimTrailsOffhandPSC() const {
    return false;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetSwingOffhandVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetSwingOffhandPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetSwingFXOffhandSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetIdleOffhandVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetIdleOffhandPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetIdleFXOffhandSocketName() const {
    return NAME_None;
}

EFortDualWieldSwingState AFortWeaponPickaxeDualWieldAthena::GetCurrentSwingState() const {
    return EFortDualWieldSwingState::None;
}

float AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandWidth() const {
    return 0.0f;
}

FName AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandSecondSocketName() const {
    return NAME_None;
}

UParticleSystem* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandPSCTemplate() const {
    return NULL;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandPSC() const {
    return NULL;
}

UNiagaraSystem* AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandNiagaraAsset() const {
    return NULL;
}

FName AFortWeaponPickaxeDualWieldAthena::GetAnimTrailsOffhandFirstSocketName() const {
    return NAME_None;
}

UFXSystemComponent* AFortWeaponPickaxeDualWieldAthena::CreateAnimTrailOffhandFX() {
    return NULL;
}

void AFortWeaponPickaxeDualWieldAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponPickaxeDualWieldAthena, CurrentWieldStance);
}

AFortWeaponPickaxeDualWieldAthena::AFortWeaponPickaxeDualWieldAthena() {
    this->WeaponMeshOffhand = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMeshOffhand"));
    this->SwingOffhandVFX = NULL;
    this->IdleOffhandVFX = NULL;
    this->AnimTrailsOffhandPSC = NULL;
    this->AnimTrailsOffhandPSCTemplate = NULL;
    this->AnimTrailsOffhandNiagaraAsset = NULL;
    this->bUseAnimTrailsOffhandPSC = true;
    this->AnimTrailsOffhandFirstSocketName = TEXT("Melee_L_Upper");
    this->AnimTrailsOffhandSecondSocketName = TEXT("Melee_L_Lower");
    this->AnimTrailsOffhandWidth = 1;
    this->IdleFXOffhandSocketName = TEXT("idle_fx_l");
    this->SwingFXOffhandSocketName = TEXT("SwingFX_l");
    this->OffhandGenericImpactSound = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[0] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[1] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[2] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[3] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[4] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[5] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[6] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[7] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[8] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[9] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[10] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[11] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[12] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[13] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[14] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[15] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[16] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[17] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[18] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[19] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[20] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[21] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[22] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[23] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[24] = NULL;
    this->OffhandImpactPhysicalSurfaceSounds[25] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[0] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[1] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[2] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[3] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[4] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[5] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[6] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[7] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[8] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[9] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[10] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[11] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[12] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[13] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[14] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[15] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[16] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[17] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[18] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[19] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[20] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[21] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[22] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[23] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[24] = NULL;
    this->OffhandImpactPhysicalSurfaceEffects[25] = NULL;
    this->CurrentWieldStance = EFortDualWieldStance::TwoPicksInUse;
    this->EffectiveSingleWieldState = NULL;
    this->OriginalEquipAnimation = NULL;
}

