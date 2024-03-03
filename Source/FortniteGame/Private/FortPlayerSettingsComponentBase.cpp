#include "FortPlayerSettingsComponentBase.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerSettingsComponentBase::ResolvePendingRepOverrides() {
}

void UFortPlayerSettingsComponentBase::OnRep_PlayerHealthIndicatorDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_NameplateDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_EnabledSettings() {
}

void UFortPlayerSettingsComponentBase::OnRep_CreativeBossHealthDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_bWoodResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bStoneResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bMetalResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bGoldCurrencyResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_AbilitySetOptionData() {
}

bool UFortPlayerSettingsComponentBase::IsSettingEnabled(const FName PropertyName) const {
    return false;
}

FGameplayTagContainer UFortPlayerSettingsComponentBase::GetHUDVisibilityTags_Implementation() const {
    return FGameplayTagContainer{};
}

void UFortPlayerSettingsComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, BuildingMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAimAssistAllowed);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bIsPlayerTriggeredRespawnAllowed);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, OnlyAllowRespawningIfPlayerStartPadsFound);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInstantReload);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInfiniteAmmo);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInfiniteResources);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowItemDrop);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowItemPickUp);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, MaxItemSlots);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bWoodResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bStoneResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bMetalResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bGoldCurrencyResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bApplyJumpPenalty);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bGliderRedeploy);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bFlyEnabled);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowFlightSprint);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, FlySpeedModifierIndex);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowFriendlyFire);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, MaximumResources);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, NameplateDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, PlayerHealthIndicatorDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, CreativeBossHealthDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, AbilitySetOptionData);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, EnabledSettings);
}

UFortPlayerSettingsComponentBase::UFortPlayerSettingsComponentBase() {
    this->MaxHealth = 1;
    this->StartingHealth = 1;
    this->MaxShield = 1;
    this->StartingShield = 1;
    this->DBNOSetting = EDBNOMutatorType::Default;
    this->RespawnHeight = 1;
    this->RespawnTime = 1;
    this->SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    this->SpawnImmunityTime = 1;
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    this->DropAllResourcesOverride = EAthenaLootDropOverride::NoOverride;
    this->HealthSiphonValue = 0;
    this->WoodSiphonValue = 0;
    this->StoneSiphonValue = 0;
    this->MetalSiphonValue = 0;
    this->GoldSiphonValue = 0;
    this->DamageToDeal = 1;
    this->bRequiresNonZeroDamage = true;
    this->TargetQueryIndex = 0;
    this->WeaponQueryIndex = 0;
    this->FallDamageMultiplier = 1;
    this->GravityOverride = 0;
    this->PlayerLives = 0;
    this->TeamToMoveToWhenOutOfSpawns = 0;
    this->EliminationsToScoreMultiplier = 1;
    this->AssistsToScoreMultiplier = 1;
    this->HarvestRateMutliplier = 1;
    this->ResourceRateOverrideIndex = 0;
    this->BuildingMode = EBuildingMode::None;
    this->bAimAssistAllowed = false;
    this->bIsPlayerTriggeredRespawnAllowed = true;
    this->OnlyAllowRespawningIfPlayerStartPadsFound = 0;
    this->bInstantReload = false;
    this->bInfiniteAmmo = false;
    this->bInfiniteResources = false;
    this->bAllowItemDrop = false;
    this->bAllowItemPickUp = false;
    this->MaxItemSlots = 1;
    this->bWoodResourceWidgetVisible = true;
    this->bStoneResourceWidgetVisible = true;
    this->bMetalResourceWidgetVisible = true;
    this->bGoldCurrencyResourceWidgetVisible = false;
    this->bApplyJumpPenalty = false;
    this->bGliderRedeploy = false;
    this->bFlyEnabled = false;
    this->bAllowFlightSprint = false;
    this->FlySpeedModifierIndex = 0;
    this->bAllowFriendlyFire = false;
    this->MaximumResources = 0;
    this->NameplateDisplayMode = EIndicatorDisplayMode::Default;
    this->PlayerHealthIndicatorDisplayMode = EPlayerIndicatorDisplayMode::DontOverride;
    this->CreativeBossHealthDisplayMode = ECreativeBossDisplayMode::DontOverride;
}

