#include "FortWeaponCharmPreviewActor.h"

void AFortWeaponCharmPreviewActor::StartLoadingNextPreviewActor(int32 SlotIndex) {
}

void AFortWeaponCharmPreviewActor::SetActiveCharmSlot(int32 CharmSlotIn) {
}



void AFortWeaponCharmPreviewActor::ClearCharm() {
}

void AFortWeaponCharmPreviewActor::ApplyCharmToSkelMesh(USkeletalMeshComponent* MeshComp) {
}

AFortWeaponCharmPreviewActor::AFortWeaponCharmPreviewActor() {
    this->MyCharm = NULL;
    this->MyCharmActor = NULL;
    this->WeaponAttachMeshComp = NULL;
    this->CharmSlot = EFortCustomCharmType::Weapon;
}

