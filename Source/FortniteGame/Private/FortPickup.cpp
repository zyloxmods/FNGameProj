#include "FortPickup.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FortLinkToActorComponent.h"
#include "FortWaterInteractionComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPickup::TossPickup(const FVector FinalLocation, AFortPawn* ItemOwner, int32 OverrideMaxStackCount, bool bToss, bool bShouldCombinePickupsWhenTossCompletes, const EFortPickupSourceTypeFlag InPickupSourceTypeFlags, const EFortPickupSpawnSource InPickupSpawnSource) {
}

void AFortPickup::SetPickedUp(const bool bInPickedUp) {
}

void AFortPickup::SetOverrideInteractRadius(float NewRadius) {
}

void AFortPickup::SetCombinePickupsWhenTossCompletes(const bool CombinePickupsWhenTossCompletes) {
}

bool AFortPickup::PickedUp() const {
    return false;
}

void AFortPickup::OnServerStopCallback(const FHitResult& Hit) {
}

void AFortPickup::OnServerBounceCallback(const FHitResult& Hit, const FVector& OldVelocity) {
}

void AFortPickup::OnRep_TossedFromContainer() {
}

void AFortPickup::OnRep_ServerStoppedSimulation() {
}

void AFortPickup::OnRep_ServerImpactSoundFlash() {
}

void AFortPickup::OnRep_PrimaryPickupItemEntry() {
}

void AFortPickup::OnRep_PickupOwnerData() {
}

void AFortPickup::OnRep_PickupLocationData() {
}

void AFortPickup::OnRep_ForceHideMinimapIndicator() {
}

void AFortPickup::OnRep_bPickedUp() {
}

void AFortPickup::HandleConnectedActorDestroyed() {
}

FFortItemEntry AFortPickup::GetPrimaryItemEntry() const {
    return FFortItemEntry{};
}

AFortPawn* AFortPickup::GetPawnWhoDroppedPickup() const {
    return NULL;
}

AFortPlayerController* AFortPickup::GetOwnerPlayerController() {
    return NULL;
}

float AFortPickup::GetMovementCapsuleRadius() const {
    return 0.0f;
}

float AFortPickup::GetMovementCapsuleHalfHeight() const {
    return 0.0f;
}

int32 AFortPickup::GetItemEntryNum() const {
    return 0;
}

FFortItemEntry AFortPickup::GetItemEntry(int32 ItemIndex) const {
    return FFortItemEntry{};
}

bool AFortPickup::GetInteractText(FText& InteractText) {
    return false;
}

bool AFortPickup::GetInteractErrorText(FText& InteractErrorText) {
    return false;
}

FText AFortPickup::GetDisplayName() {
    return FText::GetEmpty();
}

void AFortPickup::BlueprintSetPickupTarget(AFortPawn* PickupTarget, bool bPlayPickupSound) {
}

bool AFortPickup::BlueprintGetInteractErrorText_Implementation(FText& OverrideInteractErrorText) {
    return false;
}

bool AFortPickup::BlueprintCanInteract_Implementation(const AFortPlayerPawn* FortPawn, bool& bCanInteractOverride) {
    return false;
}

bool AFortPickup::AllowLongRangeAutoPickup_Implementation(const AFortPlayerPawn* FortPawn) {
    return false;
}

void AFortPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPickup, PrimaryPickupItemEntry);
    DOREPLIFETIME(AFortPickup, MultiItemPickupEntries);
    DOREPLIFETIME(AFortPickup, PickupLocationData);
    DOREPLIFETIME(AFortPickup, OptionalOwnerID);
    DOREPLIFETIME(AFortPickup, bPickedUp);
    DOREPLIFETIME(AFortPickup, bTossedFromContainer);
    DOREPLIFETIME(AFortPickup, bForceHideMinimapIndicator);
    DOREPLIFETIME(AFortPickup, bCombinePickupsWhenTossCompletes);
    DOREPLIFETIME(AFortPickup, bServerStoppedSimulation);
    DOREPLIFETIME(AFortPickup, ServerImpactSoundFlash);
    DOREPLIFETIME(AFortPickup, OverrideInteractAimRadius);
    DOREPLIFETIME(AFortPickup, PawnWhoDroppedPickup);
    DOREPLIFETIME(AFortPickup, SpecialActorID);
    DOREPLIFETIME(AFortPickup, bRandomRotation);
}

AFortPickup::AFortPickup() {
    this->bUsePickupWidget = true;
    this->bSuppressInteractionWidget = false;
    this->bWeaponsCanBeAutoPickups = true;
    this->bAutoUpgradeWeapons = false;
    this->bDoServerHandlePickupTrace = true;
    this->SimulatingTooLongLength = 1;
    this->PickupSourceTypeFlags = EFortPickupSourceTypeFlag::Other;
    this->PickupSpawnSource = EFortPickupSpawnSource::Unset;
    this->OptionalOwnerID = 0;
    this->PrimaryPickupDummyItem = NULL;
    this->TouchCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterComponent"));
    this->LinkToActorComponent = CreateDefaultSubobject<UFortLinkToActorComponent>(TEXT("LinkToActorComponent"));
    this->bPickedUp = false;
    this->bSplitOnPickup = false;
    this->bTossedFromContainer = false;
    this->bForceHideMinimapIndicator = false;
    this->bCombinePickupsWhenTossCompletes = false;
    this->bServerStoppedSimulation = false;
    this->bClientUseInterpolationOnly = true;
    this->ServerImpactSoundFlash = 0;
    this->LastLandedSoundPlayTime = 1;
    this->OverrideInteractAimRadius = 1;
    this->LandSoundZForceThreshold = 1;
    this->DefaultFlyTime = 1;
    this->bForceDefaultFlyTime = false;
    this->DroppedLoopingSoundComp = NULL;
    this->LandedSoundOverride = NULL;
    this->PawnWhoDroppedPickup = NULL;
    this->CachedSpecialActorIdx = 0;
    this->MinimapIndicator = NULL;
    this->HUDLabel = NULL;
    this->bRandomRotation = false;
    this->DespawnTime = 1;
    this->StormDespawnTime = 1;
    this->StartSimulatingTime = 1;
}

