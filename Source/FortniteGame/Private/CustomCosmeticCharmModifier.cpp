#include "CustomCosmeticCharmModifier.h"



UMeshComponent* ACustomCosmeticCharmModifier::GetSkeletalMeshForAssociatedPlayerPawnCharmType() const {
    return NULL;
}

AFortPlayerCharm* ACustomCosmeticCharmModifier::GetCharmOwner() const {
    return NULL;
}

TEnumAsByte<EFortCustomCharmType::Type> ACustomCosmeticCharmModifier::GetCharacterCharmType() const {
    return EFortCustomCharmType::Weapon;
}

void ACustomCosmeticCharmModifier::ForceResetParticleSystems() {
}

ACustomCosmeticCharmModifier::ACustomCosmeticCharmModifier() {
    CharmType = EFortCustomCharmType::NumTypes;
    MyCharmOwner = NULL;
}

