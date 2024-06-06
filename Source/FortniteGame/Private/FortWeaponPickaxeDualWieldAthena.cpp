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
    WeaponMeshOffhand = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMeshOffhand"));
    SwingOffhandVFX = NULL;
    IdleOffhandVFX = NULL;
    AnimTrailsOffhandPSC = NULL;
    AnimTrailsOffhandPSCTemplate = NULL;
    AnimTrailsOffhandNiagaraAsset = NULL;
    bUseAnimTrailsOffhandPSC = true;
    AnimTrailsOffhandFirstSocketName = TEXT("Melee_L_Upper");
    AnimTrailsOffhandSecondSocketName = TEXT("Melee_L_Lower");
    AnimTrailsOffhandWidth = 1;
    IdleFXOffhandSocketName = TEXT("idle_fx_l");
    SwingFXOffhandSocketName = TEXT("SwingFX_l");
    OffhandGenericImpactSound = NULL;
    OffhandImpactPhysicalSurfaceSounds[0] = NULL;
    OffhandImpactPhysicalSurfaceSounds[1] = NULL;
    OffhandImpactPhysicalSurfaceSounds[2] = NULL;
    OffhandImpactPhysicalSurfaceSounds[3] = NULL;
    OffhandImpactPhysicalSurfaceSounds[4] = NULL;
    OffhandImpactPhysicalSurfaceSounds[5] = NULL;
    OffhandImpactPhysicalSurfaceSounds[6] = NULL;
    OffhandImpactPhysicalSurfaceSounds[7] = NULL;
    OffhandImpactPhysicalSurfaceSounds[8] = NULL;
    OffhandImpactPhysicalSurfaceSounds[9] = NULL;
    OffhandImpactPhysicalSurfaceSounds[10] = NULL;
    OffhandImpactPhysicalSurfaceSounds[11] = NULL;
    OffhandImpactPhysicalSurfaceSounds[12] = NULL;
    OffhandImpactPhysicalSurfaceSounds[13] = NULL;
    OffhandImpactPhysicalSurfaceSounds[14] = NULL;
    OffhandImpactPhysicalSurfaceSounds[15] = NULL;
    OffhandImpactPhysicalSurfaceSounds[16] = NULL;
    OffhandImpactPhysicalSurfaceSounds[17] = NULL;
    OffhandImpactPhysicalSurfaceSounds[18] = NULL;
    OffhandImpactPhysicalSurfaceSounds[19] = NULL;
    OffhandImpactPhysicalSurfaceSounds[20] = NULL;
    OffhandImpactPhysicalSurfaceSounds[21] = NULL;
    OffhandImpactPhysicalSurfaceSounds[22] = NULL;
    OffhandImpactPhysicalSurfaceSounds[23] = NULL;
    OffhandImpactPhysicalSurfaceSounds[24] = NULL;
    OffhandImpactPhysicalSurfaceSounds[25] = NULL;
    OffhandImpactPhysicalSurfaceEffects[0] = NULL;
    OffhandImpactPhysicalSurfaceEffects[1] = NULL;
    OffhandImpactPhysicalSurfaceEffects[2] = NULL;
    OffhandImpactPhysicalSurfaceEffects[3] = NULL;
    OffhandImpactPhysicalSurfaceEffects[4] = NULL;
    OffhandImpactPhysicalSurfaceEffects[5] = NULL;
    OffhandImpactPhysicalSurfaceEffects[6] = NULL;
    OffhandImpactPhysicalSurfaceEffects[7] = NULL;
    OffhandImpactPhysicalSurfaceEffects[8] = NULL;
    OffhandImpactPhysicalSurfaceEffects[9] = NULL;
    OffhandImpactPhysicalSurfaceEffects[10] = NULL;
    OffhandImpactPhysicalSurfaceEffects[11] = NULL;
    OffhandImpactPhysicalSurfaceEffects[12] = NULL;
    OffhandImpactPhysicalSurfaceEffects[13] = NULL;
    OffhandImpactPhysicalSurfaceEffects[14] = NULL;
    OffhandImpactPhysicalSurfaceEffects[15] = NULL;
    OffhandImpactPhysicalSurfaceEffects[16] = NULL;
    OffhandImpactPhysicalSurfaceEffects[17] = NULL;
    OffhandImpactPhysicalSurfaceEffects[18] = NULL;
    OffhandImpactPhysicalSurfaceEffects[19] = NULL;
    OffhandImpactPhysicalSurfaceEffects[20] = NULL;
    OffhandImpactPhysicalSurfaceEffects[21] = NULL;
    OffhandImpactPhysicalSurfaceEffects[22] = NULL;
    OffhandImpactPhysicalSurfaceEffects[23] = NULL;
    OffhandImpactPhysicalSurfaceEffects[24] = NULL;
    OffhandImpactPhysicalSurfaceEffects[25] = NULL;
    CurrentWieldStance = EFortDualWieldStance::TwoPicksInUse;
    EffectiveSingleWieldState = NULL;
    OriginalEquipAnimation = NULL;
}

