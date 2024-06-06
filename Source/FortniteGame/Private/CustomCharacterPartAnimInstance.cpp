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
    CurrentWeapon = NULL;
    bUsesDayPhaseChange = false;
    bIgnoreSignificanceManagerAndAlwaysTick = false;
    bHideUntilFirstAnimationUpdate = false;
    bUnhideOnNextUpdate = false;
    bCanPlayCustomAnimations = false;
    bUpdateOwnerAnimInputProperty = false;
    bIsCharacterCustomizationLoaded = false;
    bIsSkydiving = false;
    bIsParachuteOpened = false;
    bIsSkydiveDiveMode = false;
    bIsSkydiveFloating = false;
    bIsCrouching = false;
    bIsSprinting = false;
    bIsAccelerating2D = false;
    bIsMoving2D = false;
    bIsBackpedaling = false;
    bIsUsingJetpack = false;
    bIsSlopeSliding = false;
    bIsSurfaceSwimming = false;
    bIsWaterJump = false;
    bIsSwimSprinting = false;
    bIsPlayingEmote = false;
    bIsPlayingMeleeAnim = false;
    bIsPlayingFullBodySlotInFrontEnd = false;
    bIsInFrontEnd = false;
    bIsInVehicle = false;
    bIsInShoppingCart = false;
    bIsInCannon = false;
    bIsTargeting = false;
    bIsCrouchSprinting = false;
    bIsDBNO = false;
    bIsOnGround = false;
    bIsLandingPredicted = false;
    bIsInVehicleSeat = false;
    bIsFerretVehicleDriver = false;
    bIsFerretVehiclePassenger = false;
    bIsGolfCartVehicleDriver = false;
    bIsGolfCartVehicleFrontPassenger = false;
    bIsGolfCartVehicleBackPassenger = false;
    bIsAntelopeVehicleDriver = false;
    bIsAntelopeVehiclePassenger = false;
    bIsJackalVehicleDriver = false;
    bIsOctopusVehicleDriver = false;
    bIsOstrichVehicleDriver = false;
    bIsOstrichVehicleGunner = false;
    bIsMeatballDriver = false;
    bIsMeatballPassenger = false;
    bIsDBNOCarrying = false;
    bIsDBNOCarried = false;
    bOverrideRBANSimSpaceInFrontEnd = true;
    CrouchingWithRigidBodyEnabled = 1;
    CurrentLOD = 0;
    bRegisteredForDayPhaseChange = false;
    PartType = EFortCustomPartType::NumTypes;
}

