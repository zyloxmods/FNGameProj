#include "AthenaShoutItemDefinition.h"

void UAthenaShoutItemDefinition::SpawnSoundComponent(TSoftObjectPtr<USoundBase> OverrideSound, USceneComponent* Component, FVector LocationAt, UAudioComponent*& SpawnedComponent, UObject* WorldContext) {
}

void UAthenaShoutItemDefinition::ConfigureSoundComponent(TSoftObjectPtr<USoundBase> OverrideSound, UAudioComponent* ComponentToConfigure) const {
}

UAthenaShoutItemDefinition::UAthenaShoutItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
}

