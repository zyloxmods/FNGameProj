#include "AthenaGliderItemDefinition.h"
#include "Templates/SubclassOf.h"

FName UAthenaGliderItemDefinition::GetUserSkeletonParameterName() const {
    return NAME_None;
}

TSoftObjectPtr<UFortPlayerGliderAnimSet> UAthenaGliderItemDefinition::GetPlayerAnimSetPtr() const {
    return NULL;
}

TSubclassOf<AFortPlayerParachute> UAthenaGliderItemDefinition::GetParachutePrefabClass() const {
    return NULL;
}

TSoftObjectPtr<USkeletalMesh> UAthenaGliderItemDefinition::GetOverrideSkelMeshPtr() const {
    return NULL;
}

TSoftClassPtr<UAnimInstance> UAthenaGliderItemDefinition::GetOverrideAnimSetPtr() const {
    return NULL;
}

bool UAthenaGliderItemDefinition::GetAttachNiagaraEffectToPlayerPawn() const {
    return false;
}

UAthenaGliderItemDefinition::UAthenaGliderItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    GliderType = EFortGliderType::Glider;
    bActivateTrailsOnRotationalMovement = true;
    TrailParamName = TEXT("Moving");
    AttachSocket = TEXT("weapon_r");
    bAutoActivate = false;
    DeployEffectTagName = TEXT("GliderDeploy");
    CleanUpDeployEffect = false;
    bAttachNiagaraEffectToPlayerPawn = false;
    UserSkeletonParameterName = TEXT("SkeletalMesh");
    AuthoredData = NULL;
}

