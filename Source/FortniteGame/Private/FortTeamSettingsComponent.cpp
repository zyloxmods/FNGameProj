#include "FortTeamSettingsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortTeamSettingsComponent::OnRep_NameplateDisplayMode() {
}

void UFortTeamSettingsComponent::OnRep_EnabledSettings() {
}

void UFortTeamSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortTeamSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortTeamSettingsComponent, bBlockBuilding);
    DOREPLIFETIME(UFortTeamSettingsComponent, bInstantReload);
    DOREPLIFETIME(UFortTeamSettingsComponent, bInfiniteAmmo);
    DOREPLIFETIME(UFortTeamSettingsComponent, bInfiniteResources);
    DOREPLIFETIME(UFortTeamSettingsComponent, bApplyJumpPenalty);
    DOREPLIFETIME(UFortTeamSettingsComponent, bGliderRedeploy);
    DOREPLIFETIME(UFortTeamSettingsComponent, bFlyEnabled);
    DOREPLIFETIME(UFortTeamSettingsComponent, bRunOutTimeToWin);
    DOREPLIFETIME(UFortTeamSettingsComponent, MaximumResources);
    DOREPLIFETIME(UFortTeamSettingsComponent, NameplateDisplayMode);
    DOREPLIFETIME(UFortTeamSettingsComponent, EnabledSettings);
}

UFortTeamSettingsComponent::UFortTeamSettingsComponent() {
    this->TeamIndex = 255;
    this->MaxHealth = 0.00f;
    this->StartingHealth = 0.00f;
    this->MaxShield = 0.00f;
    this->StartingShield = 0.00f;
    this->DBNOSetting = EDBNOMutatorType::Default;
    this->RespawnHeight = 0.00f;
    this->RespawnTime = 0.00f;
    this->SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    this->bBlockBuilding = false;
    this->bInstantReload = false;
    this->bInfiniteAmmo = false;
    this->bInfiniteResources = false;
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    this->HealthSiphonValue = 0;
    this->WoodSiphonValue = 0;
    this->StoneSiphonValue = 0;
    this->MetalSiphonValue = 0;
    this->FallDamageMultiplier = 0.00f;
    this->GravityOverride = 0;
    this->bApplyJumpPenalty = false;
    this->bGliderRedeploy = false;
    this->bFlyEnabled = false;
    this->PlayerLives = 0;
    this->TeamToMoveToWhenOutOfSpawns = 0;
    this->bRunOutTimeToWin = false;
    this->MaximumResources = 0;
    this->HarvestRateMutliplier = 0.00f;
    this->NameplateDisplayMode = EIndicatorDisplayMode::Default;
}

