#include "CustomCharacterPartModifier.h"







void ACustomCharacterPartModifier::HandleSetFirstPersonCameraOrPawnTargetingChanged(bool bChanged) {
}

UMeshComponent* ACustomCharacterPartModifier::GetSkeletalMeshForAssociatedPlayerPawnPartType() const {
    return NULL;
}

EFortCustomPartType ACustomCharacterPartModifier::GetCharacterPartType() const {
    return EFortCustomPartType::Head;
}

AFortPlayerPawn* ACustomCharacterPartModifier::GetAssociatedPlayerPawn() const {
    return NULL;
}

ACustomCharacterPartModifier::ACustomCharacterPartModifier() {
    this->bUsesDayPhaseChange = false;
    this->bUsesTargetingOrFirstPersonCameraChange = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bRegisteredForSkydiving = false;
    this->bRegisteredForTargetingOrFirstPersonCamera = false;
    this->PartType = EFortCustomPartType::NumTypes;
}

