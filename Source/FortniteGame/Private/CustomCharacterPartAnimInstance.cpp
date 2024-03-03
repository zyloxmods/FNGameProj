#include "CustomCharacterPartAnimInstance.h"


bool UCustomCharacterPartAnimInstance::PickaxeItemDefinitionHasAnyMetaTag(const TArray<FGameplayTag>& Tags, bool bRequiresEquipped) {
    return false;
}





















FVector UCustomCharacterPartAnimInstance::MakeWaveVector(FRotator Amplitudes, FRotator Frequencies, FRotator Offsets, bool bUseNoise, FVector min, FVector max) {
    return FVector{};
}

float UCustomCharacterPartAnimInstance::MakeWaveScalar(float Amplitude, float Frequency, float Offset, bool bUseNoise, FVector2D MinMax) {
    return 0.0f;
}

FRotator UCustomCharacterPartAnimInstance::MakeWaveRotator(FRotator Amplitudes, FRotator Frequencies, FRotator Offsets, bool bUseNoise, FVector min, FVector max) {
    return FRotator{};
}

USkeletalMeshComponent* UCustomCharacterPartAnimInstance::GetPartSkeletalMeshComponent() const {
    return NULL;
}

float UCustomCharacterPartAnimInstance::GetOwnerZVelocity() const {
    return 0.0f;
}

USkeletalMeshComponent* UCustomCharacterPartAnimInstance::GetOwnerSkeletalMeshComponent() const {
    return NULL;
}

UFortPlayerAnimInstance* UCustomCharacterPartAnimInstance::GetOwnerFortPlayerAnimInstance() const {
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

void UCustomCharacterPartAnimInstance::CheckForTail(bool& bHasTail) const {
}

void UCustomCharacterPartAnimInstance::CheckForBackbling(bool& bIsWearingBackbling, bool& bIsBackblingLong, float LongBackblingThreshold) const {
}

bool UCustomCharacterPartAnimInstance::CharacterItemDefinitionHasAnyMetaTag(const TArray<FGameplayTag>& Tags) {
    return false;
}

UCustomCharacterPartAnimInstance::UCustomCharacterPartAnimInstance() {
    this->CurrentWeapon = NULL;
    this->bUsesDayPhaseChange = false;
    this->bIgnoreSignificanceManagerAndAlwaysTick = false;
    this->bHideUntilFirstAnimationUpdate = false;
    this->bUnhideOnNextUpdate = false;
    this->bCanPlayCustomAnimations = false;
    this->bUpdateOwnerAnimInputProperty = false;
    this->bIsCharacterCustomizationLoaded = false;
    this->bIsSkydiving = false;
    this->bIsParachuteOpened = false;
    this->bIsSkydiveDiveMode = false;
    this->bIsSkydiveFloating = false;
    this->bIsCrouching = false;
    this->bIsSprinting = false;
    this->bIsAccelerating2D = false;
    this->bIsMoving2D = false;
    this->bIsBackpedaling = false;
    this->bIsUsingJetpack = false;
    this->bIsSlopeSliding = false;
    this->bIsSurfaceSwimming = false;
    this->bIsWaterJump = false;
    this->bIsSwimSprinting = false;
    this->bIsPlayingEmote = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsPlayingFullBodySlotInFrontEnd = false;
    this->bIsInFrontEnd = false;
    this->bIsInVehicle = false;
    this->bIsInShoppingCart = false;
    this->bIsInCannon = false;
    this->bIsTargeting = false;
    this->bIsCrouchSprinting = false;
    this->bIsDBNO = false;
    this->bIsOnGround = false;
    this->bIsLandingPredicted = false;
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
    this->bIsOstrichVehicleDriver = false;
    this->bIsOstrichVehicleGunner = false;
    this->bIsMeatballDriver = false;
    this->bIsMeatballPassenger = false;
    this->bIsDBNOCarrying = false;
    this->bIsDBNOCarried = false;
    this->bOverrideRBANSimSpaceInFrontEnd = true;
    this->CrouchingWithRigidBodyEnabled = 1;
    this->CurrentLOD = 0;
    this->bRegisteredForDayPhaseChange = false;
    this->PartType = EFortCustomPartType::NumTypes;
}

