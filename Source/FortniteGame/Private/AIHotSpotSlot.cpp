#include "AIHotSpotSlot.h"

void UAIHotSpotSlot::SetSlotState(EAIHotSpotSlot NewState) {
}

void UAIHotSpotSlot::SetSlotOwnerAndState(AAIController* NewOwner, EAIHotSpotSlot NewState) {
}

void UAIHotSpotSlot::SetSlotEnabled(bool bNewEnabled) {
}


bool UAIHotSpotSlot::IsEnabled() const {
    return false;
}

bool UAIHotSpotSlot::IsAIAllowed_Implementation(const AAIController* AI) const {
    return false;
}

bool UAIHotSpotSlot::HasUserId() const {
    return false;
}

int32 UAIHotSpotSlot::GetSlotUserId() const {
    return 0;
}

EAIHotSpotSlot UAIHotSpotSlot::GetSlotState() const {
    return EAIHotSpotSlot::Free;
}

FRotator UAIHotSpotSlot::GetSlotRotation() const {
    return FRotator{};
}

float UAIHotSpotSlot::GetSlotRadius() const {
    return 0.0f;
}

AAIController* UAIHotSpotSlot::GetSlotOwner() const {
    return NULL;
}

FVector UAIHotSpotSlot::GetSlotLocation() const {
    return FVector{};
}

int32 UAIHotSpotSlot::GetSlotIndex() const {
    return 0;
}

float UAIHotSpotSlot::GetSlotHeight() const {
    return 0.0f;
}

FBox UAIHotSpotSlot::GetSlotBounds() const {
    return FBox{};
}

AAIHotSpot* UAIHotSpotSlot::GetHotSpot() const {
    return NULL;
}

void UAIHotSpotSlot::ClearSlot() {
}

UAIHotSpotSlot::UAIHotSpotSlot() {
    this->Height = 0.00f;
    this->Radius = 0.00f;
    this->DistanceToFocusActor = 0.00f;
    this->UserId = -1;
    this->bStartEnabled = false;
    this->bHasCachedAgentData = false;
    this->bHasOverlappingSlots = false;
    this->bHasDistanceToFocusActor = false;
    this->bIsBlockingOthers = false;
    this->bIsEnabled = false;
    this->Owner = NULL;
    this->SlotIndex = -1;
    this->SlotState = EAIHotSpotSlot::Free;
}

