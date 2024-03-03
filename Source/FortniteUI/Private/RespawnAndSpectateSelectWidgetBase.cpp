#include "RespawnAndSpectateSelectWidgetBase.h"


void URespawnAndSpectateSelectWidgetBase::OnSelectionMade(URespawnAndSpectateSelectButtonWidgetBase* Widget) {
}

void URespawnAndSpectateSelectWidgetBase::OnSelectionHovered(URespawnAndSpectateSelectButtonWidgetBase* Widget) {
}

void URespawnAndSpectateSelectWidgetBase::OnSelectionConfirmed() {
}

void URespawnAndSpectateSelectWidgetBase::OnRespawnBecameAvailable() {
}

void URespawnAndSpectateSelectWidgetBase::OnLocalPlayerRespawned() {
}

void URespawnAndSpectateSelectWidgetBase::OnAvailableOptionsChanged() {
}

UWidget* URespawnAndSpectateSelectWidgetBase::NativeGetDesiredFocusTarget() const {
    return NULL;
}

int32 URespawnAndSpectateSelectWidgetBase::GetCurrentlyHoveredButtonIndex() const {
    return 0;
}

URespawnAndSpectateSelectWidgetBase::URespawnAndSpectateSelectWidgetBase() {
    this->CachedMutator = NULL;
    this->ConfirmButton = NULL;
    this->TextHeader = NULL;
    this->TextDescription = NULL;
}

