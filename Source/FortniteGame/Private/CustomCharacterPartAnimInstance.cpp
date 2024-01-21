#include "CustomCharacterPartAnimInstance.h"

USkeletalMeshComponent* UCustomCharacterPartAnimInstance::GetPartSkeletalMeshComponent() const {
    return NULL;
}

float UCustomCharacterPartAnimInstance::GetOwnerZVelocity() const {
    return 0.0f;
}

USkeletalMeshComponent* UCustomCharacterPartAnimInstance::GetOwnerSkeletalMeshComponent() const {
    return NULL;
}

float UCustomCharacterPartAnimInstance::GetOwnerDirection() const {
    return 0.0f;
}

EFortCustomPartType UCustomCharacterPartAnimInstance::GetCharacterPartType() const {
    return EFortCustomPartType::Head;
}

AFortPlayerPawn* UCustomCharacterPartAnimInstance::GetAssociatedPlayerPawn() const {
    return NULL;
}

USkeletalMeshComponent* UCustomCharacterPartAnimInstance::FindChildCommponentFromAttachSocket(USkeletalMeshComponent* Parent, bool bIncludeAllDescendants, FName AttachSocket) const {
    return NULL;
}

UCustomCharacterPartAnimInstance::UCustomCharacterPartAnimInstance() {
    this->bUsesDayPhaseChange = false;
    this->bIgnoreSignificanceManagerAndAlwaysTick = false;
    this->bHideUntilFirstAnimationUpdate = false;
    this->bUnhideOnNextUpdate = false;
    this->bCanPlayCustomAnimations = false;
    this->bUpdateOwnerAnimInputProperty = false;
    this->bIsSkydiving = false;
    this->bIsParachuteOpened = false;
    this->bIsSkydiveDiveMode = false;
    this->bIsSkydiveFloating = false;
    this->bIsCrouching = false;
    this->bIsTargeting = false;
    this->bIsInVehicleSeat = false;
    this->bIsFerretVehicleDriver = false;
    this->bIsFerretVehiclePassenger = false;
    this->bIsGolfCartVehicleDriver = false;
    this->bIsGolfCartVehicleFrontPassenger = false;
    this->bIsGolfCartVehicleBackPassenger = false;
    this->bIsAntelopeVehicleDriver = false;
    this->bIsAntelopeVehiclePassenger = false;
    this->bIsJackalVehicleDriver = false;
    this->bIsOctopusVehicleDriver = false;
    this->CrouchingWithRigidBodyEnabled = 0.00f;
    this->CurrentLOD = 0;
    this->bRegisteredForDayPhaseChange = false;
    this->PartType = EFortCustomPartType::NumTypes;
}

