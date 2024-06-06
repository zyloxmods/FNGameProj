#include "BuildingGameplayActor.h"

void ABuildingGameplayActor::SetTouchComponentForAbilityDeliveryInfo(UPrimitiveComponent* PrimitiveComponent) {
}

void ABuildingGameplayActor::SetInitialVelocity(const FVector& InitialVelocity) {
}

void ABuildingGameplayActor::SetIgnoreInstigatorCollision(bool bShouldIgnore) {
}

void ABuildingGameplayActor::SetAbilitySourceLevel(int32 NewAbilitySourceLevel) {
}


void ABuildingGameplayActor::OnRegisteredTouchComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingGameplayActor::OnRegisteredTouchComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ABuildingGameplayActor::K2_RemoveGameplayCue(FGameplayTag GameplayCueTag) {
}

void ABuildingGameplayActor::K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void ABuildingGameplayActor::K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) {
}

void ABuildingGameplayActor::K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) {
}

FTransform ABuildingGameplayActor::GetTargetingSourceTransform_Implementation(EFortAbilityTargetingSource Source) const {
    return FTransform{};
}

void ABuildingGameplayActor::ForceChangeOwnerInstigator(AFortPlayerController* NewInstigator) {
}

void ABuildingGameplayActor::EnableAbilityDeliveryInfo(FGameplayTag BucketTag) {
}

void ABuildingGameplayActor::DisableAbilityDeliveryInfo(FGameplayTag BucketTag) {
}

bool ABuildingGameplayActor::AcceptsEmoteSprays_Implementation() const {
    return false;
}

ABuildingGameplayActor::ABuildingGameplayActor() {
    AbilitySet = NULL;
    InherentAbilitySets[0] = NULL;
    InherentAbilitySets[1] = NULL;
    InherentAbilitySets[2] = NULL;
    InherentAbilitySets[3] = NULL;
    InherentAbilitySets[4] = NULL;
    DamageSet = NULL;
    bAllowRidingOnActor = false;
    bIgnoreInstigatorCollision = false;
    bAddOwnerVelocity = false;
    AbilitySourceLevel = 0;
    bApplyDefaultEnabledAbilityBucketsOnInit = true;
    bUseSimpleActorTouchSetupForAbilityBuckets = true;
    bShowInteractKeybind = true;
    RegisteredTouchComponent = NULL;
    PostProcessOverlapBlendWeight = 1;
}

