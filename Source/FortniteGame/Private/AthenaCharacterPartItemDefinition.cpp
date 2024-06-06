#include "AthenaCharacterPartItemDefinition.h"

TArray<UCustomCharacterPart*> UAthenaCharacterPartItemDefinition::GetCharacterParts() const {
    return TArray<UCustomCharacterPart*>();
}

UAthenaCharacterPartItemDefinition::UAthenaCharacterPartItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
}

