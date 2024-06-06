#include "AthenaToyItemDefinition.h"

TSoftClassPtr<AActor> UAthenaToyItemDefinition::GetToyActorClass() const {
    return NULL;
}

void UAthenaToyItemDefinition::BakeLaunchPositions() {
}

UAthenaToyItemDefinition::UAthenaToyItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
}

