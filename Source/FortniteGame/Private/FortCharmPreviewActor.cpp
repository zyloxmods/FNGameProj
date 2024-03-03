#include "FortCharmPreviewActor.h"

void AFortCharmPreviewActor::SetActiveCharmSlot(int32 CharmSlotIn) {
}


void AFortCharmPreviewActor::ApplyMyCosmeticItemToHero(AFortPlayerPawn* PawnToModify, AFortPlayerController* FortPC) {
}

AFortCharmPreviewActor::AFortCharmPreviewActor() {
    this->MyCosmeticItem = NULL;
    this->CharmSlot = EFortCustomCharmType::Lapel;
}

