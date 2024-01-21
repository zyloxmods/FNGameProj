#include "BuildingGameplayActorConsumable.h"
#include "Templates/SubclassOf.h"

void ABuildingGameplayActorConsumable::PrepareOnConsumeGameplayEffectSpec_Implementation(FGameplayEffectSpecHandle& SpecHandle) {
}


bool ABuildingGameplayActorConsumable::OnInteractAllowedToConsume_Implementation(const AFortPawn* InteractingPawn) {
    return false;
}


FGameplayEffectSpecHandle ABuildingGameplayActorConsumable::MakeOnConsumeGameplayEffectSpec() {
    return FGameplayEffectSpecHandle{};
}

UAnimMontage* ABuildingGameplayActorConsumable::GetOnConsumeMontage() const {
    return NULL;
}

TSubclassOf<UGameplayEffect> ABuildingGameplayActorConsumable::GetOnConsumeGameplayEffect() const {
    return NULL;
}

FTransform ABuildingGameplayActorConsumable::GetDeathFXTransform_Implementation() const {
    return FTransform{};
}

ABuildingGameplayActorConsumable::ABuildingGameplayActorConsumable() {
    this->OnConsumeGameplayEffect = NULL;
    this->OnConsumeMontageAbility = NULL;
    this->OnConsumeMontage = NULL;
    this->bSpawnerCalculateRandomRotation = true;
    this->DeathParticles = NULL;
    this->DeathSound = NULL;
    this->MaxDrawDistanceStw = 0.00f;
    this->MaxDrawDistanceAthena = 0.00f;
}

