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
    Height = 1;
    Radius = 1;
    DistanceToFocusActor = 1;
    UserId = 0;
    bStartEnabled = false;
    bHasCachedAgentData = false;
    bHasOverlappingSlots = false;
    bHasDistanceToFocusActor = false;
    bIsBlockingOthers = false;
    bIsEnabled = false;
    Owner = NULL;
    SlotIndex = 0;
    SlotState = EAIHotSpotSlot::Free;
}

