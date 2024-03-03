#include "AssetAttachment.h"

FAssetAttachment::FAssetAttachment() {
    this->SkeletalMeshAsset = NULL;
    this->StaticMeshAsset = NULL;
    this->bSkipOnDedicatedServers = false;
    this->bIsCurrentWeaponSubstitute = false;
    this->SkelMeshComp = NULL;
    this->StaticMeshComp = NULL;
}

