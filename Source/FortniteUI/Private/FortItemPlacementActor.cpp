#include "FortItemPlacementActor.h"







void AFortItemPlacementActor::HandlePawnTouchBegin(TEnumAsByte<ETouchIndex::Type> FingerIndex, AActor* TouchedActor) {
}

void AFortItemPlacementActor::HandlePawnFinishedApplyingCharacterParts(AFortPlayerPawn* Pawn) {
}

void AFortItemPlacementActor::HandlePawnEndCursorOver(AActor* TouchedActor) {
}

void AFortItemPlacementActor::HandlePawnClicked(AActor* TouchedActor, FKey ButtonPressed) {
}

void AFortItemPlacementActor::HandlePawnBeginCursorOver(AActor* TouchedActor) {
}

void AFortItemPlacementActor::HandleFinishedCharacterCustomization(AFortPlayerPawn* InPawn) {
}

void AFortItemPlacementActor::HandleBoneTransformsFinalized() {
}

AFortItemPlacementActor::AFortItemPlacementActor() {
    this->WidgetComponent_LoadingIndicator = NULL;
    this->bIsActorHovered = false;
    this->CurrentPawn = NULL;
}

