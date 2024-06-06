#include "FortPlayerCharm.h"
#include "SkeletalMeshComponentBudgeted.h"



USoundBase* AFortPlayerCharm::GetCharmSoundAssetByIndex(const int32 IndexIn, bool& bValidOut) const {
    return NULL;
}

USoundBase* AFortPlayerCharm::GetCharmSoundAssetByDescName(const FName DescNameIn, bool& bValidOut) const {
    return NULL;
}

USkeletalMeshComponentBudgeted* AFortPlayerCharm::GetCharmMeshComponent() const {
    return NULL;
}

FName AFortPlayerCharm::GetCharmAttachedToSocket() const {
    return NAME_None;
}

USceneComponent* AFortPlayerCharm::GetCharmAttachedToComponent() const {
    return NULL;
}

AFortPlayerCharm::AFortPlayerCharm() {
    CharmItemDef = NULL;
    CharmMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("CharmMesh0"));
    bIsFrontEndPreview = false;
    CharmAttachedTo = NULL;
    CharmModifier = NULL;
}

