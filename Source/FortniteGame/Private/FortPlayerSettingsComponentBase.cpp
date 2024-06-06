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
    MaxHealth = 1;
    StartingHealth = 1;
    MaxShield = 1;
    StartingShield = 1;
    DBNOSetting = EDBNOMutatorType::Default;
    RespawnHeight = 1;
    RespawnTime = 1;
    SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    SpawnImmunityTime = 1;
    DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    DropAllResourcesOverride = EAthenaLootDropOverride::NoOverride;
    HealthSiphonValue = 0;
    WoodSiphonValue = 0;
    StoneSiphonValue = 0;
    MetalSiphonValue = 0;
    GoldSiphonValue = 0;
    DamageToDeal = 1;
    bRequiresNonZeroDamage = true;
    TargetQueryIndex = 0;
    WeaponQueryIndex = 0;
    FallDamageMultiplier = 1;
    GravityOverride = 0;
    PlayerLives = 0;
    TeamToMoveToWhenOutOfSpawns = 0;
    EliminationsToScoreMultiplier = 1;
    AssistsToScoreMultiplier = 1;
    HarvestRateMutliplier = 1;
    ResourceRateOverrideIndex = 0;
    BuildingMode = EBuildingMode::None;
    bAimAssistAllowed = false;
    bIsPlayerTriggeredRespawnAllowed = true;
    OnlyAllowRespawningIfPlayerStartPadsFound = 0;
    bInstantReload = false;
    bInfiniteAmmo = false;
    bInfiniteResources = false;
    bAllowItemDrop = false;
    bAllowItemPickUp = false;
    MaxItemSlots = 1;
    bWoodResourceWidgetVisible = true;
    bStoneResourceWidgetVisible = true;
    bMetalResourceWidgetVisible = true;
    bGoldCurrencyResourceWidgetVisible = false;
    bApplyJumpPenalty = false;
    bGliderRedeploy = false;
    bFlyEnabled = false;
    bAllowFlightSprint = false;
    FlySpeedModifierIndex = 0;
    bAllowFriendlyFire = false;
    MaximumResources = 0;
    NameplateDisplayMode = EIndicatorDisplayMode::Default;
    PlayerHealthIndicatorDisplayMode = EPlayerIndicatorDisplayMode::DontOverride;
    CreativeBossHealthDisplayMode = ECreativeBossDisplayMode::DontOverride;
}

