#include "AthenaCharacterItemDefinition.h"

UAthenaCharacterItemDefinition::UAthenaCharacterItemDefinition() {
    this->HeroDefinition = NULL;
    this->DefaultBackpack = NULL;
    this->Gender = EFortCustomGender::Invalid;
    this->ItemType = EFortItemType::AthenaCharacter;
}

