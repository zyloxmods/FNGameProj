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
    MyCharm = NULL;
    MyCharmActor = NULL;
    WeaponAttachMeshComp = NULL;
    CharmSlot = EFortCustomCharmType::Weapon;
}

