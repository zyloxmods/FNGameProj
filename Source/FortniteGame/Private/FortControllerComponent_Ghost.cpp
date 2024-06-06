#include "FortControllerComponent_Ghost.h"

void UFortControllerComponent_Ghost::StartGhostMode() {
}

void UFortControllerComponent_Ghost::SetBecomeGhostOnDBNO(bool bEnable) {
}

void UFortControllerComponent_Ghost::ReviveAndBecomeGhosted() {
}

void UFortControllerComponent_Ghost::OnPlayerPossession(APawn* PossessPawn) {
}

void UFortControllerComponent_Ghost::OnPawnDBNOStateChange(AFortPawn* Pawn, bool bNewDBNOState) {
}

void UFortControllerComponent_Ghost::OnGhostModeChanged(AFortPlayerControllerGameplay* PlayerController, bool bEnteredGhostMode) {
}

bool UFortControllerComponent_Ghost::IsInGhostMode() const {
    return false;
}

//void UFortControllerComponent_Ghost::HandleAbilityEnded(const FAbilityEndedData& AbilityData) {
//}

void UFortControllerComponent_Ghost::EndGhostMode() {
}

UFortControllerComponent_Ghost::UFortControllerComponent_Ghost() {
    ItemProvidingGhostMode = NULL;
    bBecomeInvulnerableWhenGhosted = false;
    bBecomeAIIgnoredWhenGhosted = false;
    bSetHealthAndShieldsToZeroWhenGhosted = false;
    bBecomeGhostOnDBNO = false;
    bOverrideInteractionComponent = false;
    DBNOToGhostReviveGameplayEffect = NULL;
}

