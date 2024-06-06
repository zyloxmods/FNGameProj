#include "FortGameStatePvE.h"
#include "Net/UnrealNetwork.h"

bool AFortGameStatePvE::ShouldUseMoonbeamHUD() const {
    return false;
}

bool AFortGameStatePvE::ShouldUseMoonbeamGameplayFunctionality() const {
    return false;
}

void AFortGameStatePvE::SetPickupManagementSettings(FPickupManagementSettings& PickupSettings) {
}

void AFortGameStatePvE::OnDefenderRemoved(AFortAIPawn* Defender) {
}

void AFortGameStatePvE::OnDefenderDeployed(AFortAIPawn* Defender) {
}

bool AFortGameStatePvE::IsWeaponSwappingEnabled() const {
    return false;
}

bool AFortGameStatePvE::IsSwappableWeaponType(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

bool AFortGameStatePvE::IsMulchingAllowed() const {
    return false;
}

bool AFortGameStatePvE::IsDefenderItemDeployed(UFortItem* DefenderItem, AFortPlayerStateZone* RequestingPlayer) const {
    return false;
}

void AFortGameStatePvE::GetPickupManagementSettings(FPickupManagementSettings& PickupSettings) {
}

AFortAircraft* AFortGameStatePvE::GetAircraft() const {
    return NULL;
}

bool AFortGameStatePvE::CanSwapWeapon(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

bool AFortGameStatePvE::CanSpawnDefender(AFortPlayerStateZone* PlayerCausingRemoval, const FName RemoveFromDefenderSquadId, AFortAIPawn*& OutDefenderToBeRemoved, EDefenderSpawnFailureReason& OutFailureReason) const {
    return false;
}

void AFortGameStatePvE::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStatePvE, bAllowMulching);
    DOREPLIFETIME(AFortGameStatePvE, DeployedDefenders);
    DOREPLIFETIME(AFortGameStatePvE, Aircraft);
    DOREPLIFETIME(AFortGameStatePvE, bUseMoonbeamHUD);
}

AFortGameStatePvE::AFortGameStatePvE() {
    bAllowMulching = true;
    Aircraft = NULL;
    bUseMoonbeamHUD = false;
    PickupsAllowedMax = 0;
    PickupsDesiredSlack = 0;
    PickupDespawnDelaySeconds = 1;
    bDebugPickupManagement = false;
    bEnablePickupManagement = true;
    ImportantPickupThreshold = EFortRarity::Common;
    bWeaponSwappingEnabled = false;
}

