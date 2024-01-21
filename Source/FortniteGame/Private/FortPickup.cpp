#include "FortPickup.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPickup::TossPickup(const FVector FinalLocation, AFortPawn* ItemOwner, int32 OverrideMaxStackCount, bool bToss, const EFortPickupSourceTypeFlag InPickupSourceTypeFlags, const EFortPickupSpawnSource InPickupSpawnSource) {
}

bool AFortPickup::PickedUp() const {
    return false;
}

void AFortPickup::OnServerStopCallback(const FHitResult& Hit) {
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

void AFortPickup::OnRep_bPickedUp() {
}

AFortPawn* AFortPickup::GetPawnWhoDroppedPickup() const {
    return NULL;
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

void AFortPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPickup, bRandomRotation);
    DOREPLIFETIME(AFortPickup, PrimaryPickupItemEntry);
    DOREPLIFETIME(AFortPickup, MultiItemPickupEntries);
    DOREPLIFETIME(AFortPickup, PickupLocationData);
    DOREPLIFETIME(AFortPickup, OptionalOwnerID);
    DOREPLIFETIME(AFortPickup, bPickedUp);
    DOREPLIFETIME(AFortPickup, bTossedFromContainer);
    DOREPLIFETIME(AFortPickup, bCombinePickupsWhenTossCompletes);
    DOREPLIFETIME(AFortPickup, bServerStoppedSimulation);
    DOREPLIFETIME(AFortPickup, ServerImpactSoundFlash);
    DOREPLIFETIME(AFortPickup, PawnWhoDroppedPickup);
    DOREPLIFETIME(AFortPickup, SpecialActorID);
}

AFortPickup::AFortPickup() {
    this->bUsePickupWidget = true;
    this->bWeaponsCanBeAutoPickups = true;
    this->bAutoUpgradeWeapons = false;
    this->bRandomRotation = false;
    this->PickupSourceTypeFlags = 0;
    this->PickupSpawnSource = EFortPickupSpawnSource::Unset;
    this->OptionalOwnerID = -1;
    this->PrimaryPickupDummyItem = NULL;
    this->TouchCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->bPickedUp = false;
    this->bSplitOnPickup = false;
    this->bTossedFromContainer = false;
    this->bCombinePickupsWhenTossCompletes = false;
    this->bServerStoppedSimulation = false;
    this->bClientUseInterpolationOnly = true;
    this->ServerImpactSoundFlash = 0;
    this->LastLandedSoundPlayTime = 0.00f;
    this->LandSoundZForceThreshold = 250.00f;
    this->DefaultFlyTime = 1.50f;
    this->bForceDefaultFlyTime = false;
    this->DroppedLoopingSoundComp = NULL;
    this->PawnWhoDroppedPickup = NULL;
    this->CachedSpecialActorIdx = -1;
    this->MinimapIndicator = NULL;
    this->HUDLabel = NULL;
    this->DespawnTime = 0.00f;
    this->StormDespawnTime = 0.00f;
}

