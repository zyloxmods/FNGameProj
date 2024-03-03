#include "CustomCosmeticModifierBase.h"

void ACustomCosmeticModifierBase::SetCosmeticActiveVariant(TSoftObjectPtr<UAthenaCosmeticItemDefinition> SoftCosmetic, const FGameplayTag& ChannelTag, const FGameplayTag& VariantTag) {
}





void ACustomCosmeticModifierBase::OnPostResIn_Implementation() {
}

void ACustomCosmeticModifierBase::OnPlayerWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon) {
}




void ACustomCosmeticModifierBase::OnNativeCurieDetached(UObject* CurieOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& Tag) {
}

void ACustomCosmeticModifierBase::OnNativeCurieAttached(UObject* CurieOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& Tag) {
}









void ACustomCosmeticModifierBase::NativeWeaponFired(AFortWeapon* FiringWeapon) {
}

void ACustomCosmeticModifierBase::NativeOnHitPawn(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACustomCosmeticModifierBase::NativeExitedVehicle() {
}

void ACustomCosmeticModifierBase::NativeEnteredVehicle() {
}

bool ACustomCosmeticModifierBase::IsInFrontEnd() const {
    return false;
}

void ACustomCosmeticModifierBase::HandleSetFirstPersonCameraOrPawnTargetingChanged(bool bChanged) {
}

FFortAthenaLoadout ACustomCosmeticModifierBase::GetLoadout() {
    return FFortAthenaLoadout{};
}

AFortPlayerPawn* ACustomCosmeticModifierBase::GetAssociatedPlayerPawn() const {
    return NULL;
}

ACustomCosmeticModifierBase::ACustomCosmeticModifierBase() {
    this->EnteredVehicleSeatsToCareAbout = EVehicleEnteredCosmeticReaction::Driver;
    this->bUsesDayPhaseChange = false;
    this->bUsesWeaponChangeDelegate = false;
    this->bUsesWeaponFire = false;
    this->bUsesNewWeapon = false;
    this->bUsesWeaponChange = false;
    this->bUsesCurieWhatsoever = false;
    this->bUsesCurieAttach = false;
    this->bUsesCurieDetach = false;
    this->bUsesEnteredVehicle = false;
    this->bUsesTargetingOrFirstPersonCameraChange = false;
    this->bUsesOnHitPawn = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bRegisteredForSkydiving = false;
    this->bRegisteredForTargetingOrFirstPersonCamera = false;
    this->bRegisteredForWeaponChanges = false;
    this->bRegisteredForCurieChanges = false;
    this->bRegisteredForNewWeapons = false;
    this->bRegisteredForEnterVehicle = false;
    this->bRegisteredOnHitPawn = false;
}

