#include "BuildingItemWeaponUpgradeActor.h"
#include "Net/UnrealNetwork.h"

void ABuildingItemWeaponUpgradeActor::OnRep_AllowSecondInteraction() {
}

void ABuildingItemWeaponUpgradeActor::FloorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


void ABuildingItemWeaponUpgradeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingItemWeaponUpgradeActor, bAllowSecondInteraction);
}

ABuildingItemWeaponUpgradeActor::ABuildingItemWeaponUpgradeActor() {
    this->bAllowSecondInteraction = true;
    this->WoodItem = NULL;
    this->MetalItem = NULL;
    this->BrickItem = NULL;
    this->UpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    this->HorizontalUpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    this->RequiredResources = NULL;
    this->RequiredHorizontalResources = NULL;
    this->CurrentWeaponDefinition = NULL;
    this->UpgradedWeaponRarity = EFortRarity::Common;
    this->BuildingAttachmentType = EBuildingAttachmentType::ATTACH_None;
    this->bBlocksAttachmentPlacement = true;
    this->BuildingActorAttachedTo = NULL;
}

