#include "FortAthenaTutorial_Move.h"

void AFortAthenaTutorial_Move::OnBeginOverlapJumpTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Move::OnBeginOverlapJumpEndTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Move::OnBeginOverlapCrouchTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Move::OnBeginOverlapCrouchEndTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

AFortAthenaTutorial_Move::AFortAthenaTutorial_Move() {
    this->JumpMarker = NULL;
    this->JumpArrows = NULL;
    this->JumpTriggerBox = NULL;
    this->JumpEndTriggerBox = NULL;
    this->CrouchMarker = NULL;
    this->CrouchArrows = NULL;
    this->CrouchTriggerBox = NULL;
    this->CrouchEndTriggerBox = NULL;
    this->BlockerJump = NULL;
    this->BlockerCrouch = NULL;
}

