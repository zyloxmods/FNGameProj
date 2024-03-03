#include "BuildingGameplayActorConsumable.h"
#include "Templates/SubclassOf.h"

void ABuildingGameplayActorConsumable::PrepareOnConsumeGameplayEffectSpec_Implementation(FGameplayEffectSpecHandle& SpecHandle) {
}

bool ABuildingGameplayActorConsumable::OnInteractAllowedToConsume_Implementation(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) {
    return false;
}


void ABuildingGameplayActorConsumable::OnAllowedToConsumeFailed_Implementation(const AFortPawn* InteractingPawn) {
}

FGameplayEffectSpecHandle ABuildingGameplayActorConsumable::MakeOnConsumeGameplayEffectSpec(AActor* EventCauser, const int32 Level) {
    return FGameplayEffectSpecHandle{};
}

TSubclassOf<UFortGameplayAbility> ABuildingGameplayActorConsumable::GetOnConsumeMontageAbility() const {
    return NULL;
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

TSubclassOf<UFortGameplayAbility> ABuildingGameplayActorConsumable::DetermineOnConsumeMontageAbility_Implementation() const {
    return NULL;
}

UAnimMontage* ABuildingGameplayActorConsumable::DetermineOnConsumeMontage_Implementation() const {
    return NULL;
}

TSubclassOf<UGameplayEffect> ABuildingGameplayActorConsumable::DetermineOnConsumeGameplayEffect_Implementation() const {
    return NULL;
}

ABuildingGameplayActorConsumable::ABuildingGameplayActorConsumable() {
    this->OnConsumeGameplayEffect = NULL;
    this->OnConsumeMontageAbility = NULL;
    this->OnConsumeMontage = NULL;
    this->bSpawnerCalculateRandomRotation = true;
    this->DeathParticles = NULL;
    this->DeathSound = NULL;
    this->MaxDrawDistanceStw = 1;
    this->MaxDrawDistanceAthena = 1;
    this->SearchAnim = NULL;
}

