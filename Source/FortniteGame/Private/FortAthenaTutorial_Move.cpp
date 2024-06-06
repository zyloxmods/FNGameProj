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
    JumpMarker = NULL;
    JumpArrows = NULL;
    JumpTriggerBox = NULL;
    JumpEndTriggerBox = NULL;
    CrouchMarker = NULL;
    CrouchArrows = NULL;
    CrouchTriggerBox = NULL;
    CrouchEndTriggerBox = NULL;
    BlockerJump = NULL;
    BlockerCrouch = NULL;
}

