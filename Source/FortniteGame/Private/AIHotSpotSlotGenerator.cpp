#include "AIHotSpotSlotGenerator.h"
#include "Templates/SubclassOf.h"

AAIHotSpot* UAIHotSpotSlotGenerator::GetHotSpot() const {
    return NULL;
}

void UAIHotSpotSlotGenerator::GenerateSlots_Implementation() {
}

UAIHotSpotSlot* UAIHotSpotSlotGenerator::AddSlot(const FVector& RelativeLocation, const FRotator& RelativeRotation, TSubclassOf<UAIHotSpotSlot> CustomSlotClass, bool bEnabled) const {
    return NULL;
}

UAIHotSpotSlotGenerator::UAIHotSpotSlotGenerator() {
}

