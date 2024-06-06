#include "FortAccoladeItemDefinition.h"

EXPEventPriorityType UFortAccoladeItemDefinition::GetPriority() const {
    return EXPEventPriorityType::NearReticle;
}

TSoftObjectPtr<UTexture2D> UFortAccoladeItemDefinition::GetPreviousAccoladeSmallPreviewImage() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortAccoladeItemDefinition::GetPreviousAccoladeLargePreviewImage() const {
    return NULL;
}

USoundCue* UFortAccoladeItemDefinition::GetAwardedSound() const {
    return NULL;
}

int32 UFortAccoladeItemDefinition::GetAccoladeXpValueWithCountScalar(const int32 Count) const {
    return 0;
}

int32 UFortAccoladeItemDefinition::GetAccoladeXpValue() const {
    return 0;
}

EFortAccoladeType UFortAccoladeItemDefinition::GetAccoladeType() const {
    return EFortAccoladeType::Acknowledgement;
}

EFortAccoladeSubtype UFortAccoladeItemDefinition::GetAccoladeSubtype() const {
    return EFortAccoladeSubtype::NotSet;
}

float UFortAccoladeItemDefinition::GetAccoladeLevel() const {
    return 0.0f;
}

UFortAccoladeItemDefinition::UFortAccoladeItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    AccoladeType = EFortAccoladeType::Acknowledgement;
    AccoladeSubtype = EFortAccoladeSubtype::NotSet;
    Priority = EXPEventPriorityType::NearReticle;
    AccoladeLevel = 1;
    bOnlyAllowOncePerDay = false;
    bIgnoreInAntiAddictionReducedStates = false;
    AwardedSoundCue = NULL;
    ItemType = EFortItemType::Accolades;
}

