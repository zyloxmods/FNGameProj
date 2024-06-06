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
    bAllowSecondInteraction = true;
    WoodItem = NULL;
    MetalItem = NULL;
    BrickItem = NULL;
    UpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    HorizontalUpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    RequiredResources = NULL;
    RequiredHorizontalResources = NULL;
    CurrentWeaponDefinition = NULL;
    UpgradedWeaponRarity = EFortRarity::Common;
    BuildingAttachmentType = EBuildingAttachmentType::ATTACH_None;
    bBlocksAttachmentPlacement = true;
    BuildingActorAttachedTo = NULL;
}

