#include "DynamicBackgroundDirector.h"

void ADynamicBackgroundDirector::TryForceSetupDonutStore() {
}

void ADynamicBackgroundDirector::SetIsInDonutSequence(bool bIsInSequence) {
}

void ADynamicBackgroundDirector::ResetDonutShopSeen() {
}

void ADynamicBackgroundDirector::RequestDonutUIPlayAnim() {
}

void ADynamicBackgroundDirector::OnDonutSequenceInitiated() {
}

void ADynamicBackgroundDirector::MarkDonutSequenceSeen() {
}

bool ADynamicBackgroundDirector::GetHasDonutShopSequenceBeenSeen() {
    return false;
}

ADynamicBackgroundDirector::ADynamicBackgroundDirector() {
    this->DynamicBackgroundKey = EDynamicBackgroudKey::Lobby;
}

