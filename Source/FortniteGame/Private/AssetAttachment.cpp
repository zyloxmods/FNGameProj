#include "AssetAttachment.h"

FAssetAttachment::FAssetAttachment() {
    SkeletalMeshAsset = NULL;
    StaticMeshAsset = NULL;
    bSkipOnDedicatedServers = false;
    bIsCurrentWeaponSubstitute = false;
    SkelMeshComp = NULL;
    StaticMeshComp = NULL;
}

