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
    EnteredVehicleSeatsToCareAbout = EVehicleEnteredCosmeticReaction::Driver;
    bUsesDayPhaseChange = false;
    bUsesWeaponChangeDelegate = false;
    bUsesWeaponFire = false;
    bUsesNewWeapon = false;
    bUsesWeaponChange = false;
    bUsesCurieWhatsoever = false;
    bUsesCurieAttach = false;
    bUsesCurieDetach = false;
    bUsesEnteredVehicle = false;
    bUsesTargetingOrFirstPersonCameraChange = false;
    bUsesOnHitPawn = false;
    bRegisteredForDayPhaseChange = false;
    bRegisteredForSkydiving = false;
    bRegisteredForTargetingOrFirstPersonCamera = false;
    bRegisteredForWeaponChanges = false;
    bRegisteredForCurieChanges = false;
    bRegisteredForNewWeapons = false;
    bRegisteredForEnterVehicle = false;
    bRegisteredOnHitPawn = false;
}

