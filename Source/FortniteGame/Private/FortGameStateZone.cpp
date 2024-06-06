#include "FortGameStateZone.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateZone::UnregisterGameplayModifier(const FActiveGameplayModifierHandle& InHandleToUnregister) {
}

void AFortGameStateZone::UnbindDelegateOnGameplayVoteUpdated(EFortVoteType VoteType, FOnGameplayVotesUpdated Delegate) {
}

bool AFortGameStateZone::ShouldDisablePlayerTeleportingDuringMissionResults() const {
    return false;
}

void AFortGameStateZone::SetZoneCompletionResult(EFortCompletionResult NewCompletionResult) {
}

void AFortGameStateZone::SetWorldLootLevel(const int32 NewLootLevel) {
}

void AFortGameStateZone::SetMissionRewardOverrideTag(FText MissionRewardOverrideTag) {
}

void AFortGameStateZone::SetMissionRewardLootLevelOverride(int32 LootLevel) {
}

void AFortGameStateZone::SetIsDBNODeathEnabled(bool NewValue) {
}

bool AFortGameStateZone::SetDifficultyIncreaseRewardTier(int32 InDifficultyIncreaseTier) {
    return false;
}

void AFortGameStateZone::SetBuildingAllowed(bool bBuildingAtLayoutRequirementsAllowed, bool bBuildingWithoutLayoutRequirementsAllowed) {
}

void AFortGameStateZone::ServerSubmitGameplayVote(EFortVoteType VoteType, int32 VoteDecision, const FUniqueNetIdRepl& PlayerNetId) {
}

void AFortGameStateZone::ServerFireAIDirectorEventBatch_Implementation(const TArray<FFortAIDirectorEvent>& Payload) {
}
bool AFortGameStateZone::ServerFireAIDirectorEventBatch_Validate(const TArray<FFortAIDirectorEvent>& Payload) {
    return true;
}

void AFortGameStateZone::ServerFireAIDirectorEvent_Implementation(EFortAIDirectorEvent Event, UObject* EventSource, UObject* EventTarget, float EventMultiplier) {
}
bool AFortGameStateZone::ServerFireAIDirectorEvent_Validate(EFortAIDirectorEvent Event, UObject* EventSource, UObject* EventTarget, float EventMultiplier) {
    return true;
}

void AFortGameStateZone::ServerEndGameplayVote(EFortVoteType VoteType, const FUniqueNetIdRepl& PlayerNetId) {
}

void AFortGameStateZone::ServerBeginGameplayVote(EFortVoteType VoteType, const FUniqueNetIdRepl& PlayerNetId, FFortVoteConfig VoteConfig) {
}

void AFortGameStateZone::RemovePlayerAbilityRestriction() {
}

FActiveGameplayModifierHandle AFortGameStateZone::RegisterGameplayModifier(const UFortGameplayModifierItemDefinition* InModifierToRegister, int32 Expiration) {
    return FActiveGameplayModifierHandle{};
}

void AFortGameStateZone::OnWaveStart_Implementation(const FText& LevelText, int32 Level, const FText& WaveText, int32 WaveNum) {
}

void AFortGameStateZone::OnWaveEncounterStarted(const FTieredWaveSetData& WaveData, const FText& LevelText, int32 Level, const FText& WaveText, int32 WaveNum) {
}

void AFortGameStateZone::OnWaveBasedModifiersAppliedMulticast_Implementation(const TArray<UFortGameplayModifierItemDefinition*>& ModifiersApplied) {
}

void AFortGameStateZone::OnRepServerUnstableFramerate() {
}

void AFortGameStateZone::OnRep_ZoneDifficultyInfoRow() {
}

void AFortGameStateZone::OnRep_TheaterUniqueId() {
}

void AFortGameStateZone::OnRep_ServerGameplayTagIndexHash() {
}

void AFortGameStateZone::OnRep_PlayerStructuresChanged() {
}

void AFortGameStateZone::OnRep_PlayerSharedTrapAttributes() {
}

void AFortGameStateZone::OnRep_PlayerBuildingSkillLevel() {
}

void AFortGameStateZone::OnRep_NumSurvivorsRescued() {
}

void AFortGameStateZone::OnRep_MissionRewards() {
}

void AFortGameStateZone::OnRep_MissionGenerator() {
}

void AFortGameStateZone::OnRep_MissionAlertData() {
}

void AFortGameStateZone::OnRep_GameplayVotes() {
}

void AFortGameStateZone::OnRep_GameDifficulty() {
}

void AFortGameStateZone::OnRep_ExplicitGloballyBlockedAbilityTags() {
}

void AFortGameStateZone::OnRep_DifficultyIncreaseRewardTier() {
}

void AFortGameStateZone::OnRep_DifficultyIncreaseRewards() {
}

void AFortGameStateZone::OnRep_CompletionResult() {
}

void AFortGameStateZone::OnRep_ClientPreloadMissionClasses() {
}

void AFortGameStateZone::OnRep_bGlobalCeaseFire() {
}

void AFortGameStateZone::OnRep_AllSpawnGroupUpgradeModifierDefs() {
}

void AFortGameStateZone::OnRep_ActiveGameplayModifiers() {
}

void AFortGameStateZone::NotifySurvivorSpawned() {
}

void AFortGameStateZone::NotifySurvivorRescued(AFortPlayerController* Rescuer, const FString& SurvivorName) {
}

void AFortGameStateZone::NotifySurvivorDead() {
}

void AFortGameStateZone::NotifyEndFailedGameplayVoteLockout_Implementation(EFortVoteType VoteType) {
}

bool AFortGameStateZone::IsRespawningAllowed(AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortGameStateZone::IsGameplayVoteLocked(EFortVoteType VoteType) const {
    return false;
}

bool AFortGameStateZone::IsGameplayVoteInProgress(EFortVoteType VoteType) const {
    return false;
}

bool AFortGameStateZone::IsGameplayVoteActive(EFortVoteType VoteType) const {
    return false;
}

bool AFortGameStateZone::IsBuildingWithoutLayoutRequirementsAllowed() const {
    return false;
}

bool AFortGameStateZone::IsBuildingAtLayoutRequirementsAllowed() const {
    return false;
}

bool AFortGameStateZone::IsAnyGameplayVoteActive() const {
    return false;
}

bool AFortGameStateZone::HasActiveGameplayModifiers() const {
    return false;
}

void AFortGameStateZone::GloballyUnblockAbilitiesWithTags(FGameplayTagContainer TagsToUnblock) {
}

void AFortGameStateZone::GloballyBlockAbilitiesWithTags(FGameplayTagContainer TagsToBlock) {
}

EFortCompletionResult AFortGameStateZone::GetZoneCompletionResult() const {
    return EFortCompletionResult::Win;
}

bool AFortGameStateZone::GetVoteStartTime(EFortVoteType VoteType, float& VoteStartTime) const {
    return false;
}

bool AFortGameStateZone::GetVoteInstigator(EFortVoteType VoteType, FUniqueNetIdRepl& InstigatorNetId) const {
    return false;
}

bool AFortGameStateZone::GetVoteEndTime(EFortVoteType VoteType, float& VoteEndTime) const {
    return false;
}

float AFortGameStateZone::GetVoteDuration(EFortVoteType VoteType) const {
    return 0.0f;
}

bool AFortGameStateZone::GetVoteArbitratorType(EFortVoteType VoteType, EFortVoteArbitratorType& ArbitratorType) const {
    return false;
}

AFortInGameMapManager* AFortGameStateZone::GetUIMapManager() {
    return NULL;
}

int32 AFortGameStateZone::GetTotalScore(EStatCategory ScoreCategory) const {
    return 0;
}

float AFortGameStateZone::GetTimeRemainingToEndVote(EFortVoteType VoteType) const {
    return 0.0f;
}

float AFortGameStateZone::GetTimeRemainingToEndFailedVoteLockout(EFortVoteType VoteType) const {
    return 0.0f;
}

float AFortGameStateZone::GetTimeElapsedSinceEndVote(EFortVoteType VoteType) const {
    return 0.0f;
}

float AFortGameStateZone::GetTimeElapsedSinceBeginVote(EFortVoteType VoteType) const {
    return 0.0f;
}

AFortThreatParticleActor* AFortGameStateZone::GetThreatParticleActor() const {
    return NULL;
}



FText AFortGameStateZone::GetSupressedCraftingDisplayText_Implementation() const {
    return FText::GetEmpty();
}

int32 AFortGameStateZone::GetNumSurvivorsSpawned() const {
    return 0;
}

int32 AFortGameStateZone::GetNumSurvivorsRescued() const {
    return 0;
}

int32 AFortGameStateZone::GetNumSurvivorsDead() const {
    return 0;
}

int32 AFortGameStateZone::GetNumAllowedDifficultyIncreases() const {
    return 0;
}

bool AFortGameStateZone::GetIsDBNODeathEnabled() const {
    return false;
}

TArray<FUniqueNetIdRepl> AFortGameStateZone::GetGameplayVotesForChoice(EFortVoteType VoteType, int32 VoteChoice) const {
    return TArray<FUniqueNetIdRepl>();
}

float AFortGameStateZone::GetGameDifficulty() const {
    return 0.0f;
}

float AFortGameStateZone::GetFailedVoteLockOutDuration(EFortVoteType VoteType) const {
    return 0.0f;
}

bool AFortGameStateZone::GetCurrentVoters(EFortVoteType VoteType, TArray<FVoter>& Voters) const {
    return false;
}

void AFortGameStateZone::GetActiveModifiers(TArray<UFortGameplayModifierItemDefinition*>& OutActiveModifiers) const {
}

void AFortGameStateZone::BindDelegateOnGameplayVoteUpdated(EFortVoteType VoteType, FOnGameplayVotesUpdated Delegate) {
}

void AFortGameStateZone::ApplyPlayerAbilityRestriction() {
}

void AFortGameStateZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateZone, WaitingToLeaveZoneTimeLeft);
    DOREPLIFETIME(AFortGameStateZone, HostilityMeterPercent);
    DOREPLIFETIME(AFortGameStateZone, IntensityPercent);
    DOREPLIFETIME(AFortGameStateZone, SpawnPointsCap);
    DOREPLIFETIME(AFortGameStateZone, SpawnPointsAllocated);
    DOREPLIFETIME(AFortGameStateZone, MaxTotalAI);
    DOREPLIFETIME(AFortGameStateZone, MaxEncounterAI);
    DOREPLIFETIME(AFortGameStateZone, MaxEncounterSP);
    DOREPLIFETIME(AFortGameStateZone, ReplicatedMontageMap);
    DOREPLIFETIME(AFortGameStateZone, AllSpawnGroupUpgradeModifierDefs);
    DOREPLIFETIME(AFortGameStateZone, CompletionResult);
    DOREPLIFETIME(AFortGameStateZone, PlayerBuildingSkillLevel);
    DOREPLIFETIME(AFortGameStateZone, PlayerSharedMaxTrapAttributes);
    DOREPLIFETIME(AFortGameStateZone, ExplicitGloballyBlockedAbilityTags);
    DOREPLIFETIME(AFortGameStateZone, bInvitesRestricted);
    DOREPLIFETIME(AFortGameStateZone, bDBNODeathEnabled);
    DOREPLIFETIME(AFortGameStateZone, ServerGameplayTagIndexHash);
    DOREPLIFETIME(AFortGameStateZone, TotalPlayerStructures);
    DOREPLIFETIME(AFortGameStateZone, MaxPlayerStructures);
    DOREPLIFETIME(AFortGameStateZone, bGlobalCeaseFire);
    DOREPLIFETIME(AFortGameStateZone, GlobalEnvironmentAbilityActor);
    DOREPLIFETIME(AFortGameStateZone, ActiveGameplayModifiers);
    DOREPLIFETIME(AFortGameStateZone, CurieManager);
    DOREPLIFETIME(AFortGameStateZone, ZoneDifficultyInfoRow);
    DOREPLIFETIME(AFortGameStateZone, ZoneTheme);
    DOREPLIFETIME(AFortGameStateZone, MissionGeneratorClass);
    DOREPLIFETIME(AFortGameStateZone, MissionRewards);
    DOREPLIFETIME(AFortGameStateZone, DifficultyIncreaseRewards);
    DOREPLIFETIME(AFortGameStateZone, MissionAlertData);
    DOREPLIFETIME(AFortGameStateZone, ClientPreloadMissionClasses);
    DOREPLIFETIME(AFortGameStateZone, ThreatVisualsManager);
    DOREPLIFETIME(AFortGameStateZone, ThreatParticleActor);
    DOREPLIFETIME(AFortGameStateZone, GameDifficulty);
    DOREPLIFETIME(AFortGameStateZone, bIsGroupContent);
    DOREPLIFETIME(AFortGameStateZone, DifficultyIncreaseRewardTier);
    DOREPLIFETIME(AFortGameStateZone, UIMapManager);
    DOREPLIFETIME(AFortGameStateZone, TheaterUniqueId);
    DOREPLIFETIME(AFortGameStateZone, MissionLogDebugString);
    DOREPLIFETIME(AFortGameStateZone, bAllowBuildingAtLayoutRequirements);
    DOREPLIFETIME(AFortGameStateZone, bAllowBuildingWithoutLayoutRequirements);
    DOREPLIFETIME(AFortGameStateZone, bAllowLayoutRequirementsFeature);
    DOREPLIFETIME(AFortGameStateZone, NumSurvivorsRescued);
    DOREPLIFETIME(AFortGameStateZone, ServerStability);
    DOREPLIFETIME(AFortGameStateZone, GameplayVotesArray);
    DOREPLIFETIME(AFortGameStateZone, CreativeRealEstatePlotManager);
}

AFortGameStateZone::AFortGameStateZone() {
    PawnIDCount = 0;
    WaitingToLeaveZoneTimeLeft = 0;
    HostilityMeterPercent = 1;
    IntensityPercent = 1;
    SpawnPointsCap = 0;
    SpawnPointsAllocated = 0;
    MaxTotalAI = 0;
    MaxEncounterAI = 0;
    MaxEncounterSP = 0;
    CompletionResult = EFortCompletionResult::Win;
    PlayerBuildingSkillLevel = 1;
    bInvitesRestricted = false;
    bDBNODeathEnabled = true;
    ServerGameplayTagIndexHash = 0;
    bDisconnectOnServerGameplayTagIndexHashMismatch = true;
    TotalPlayerStructures = 0;
    MaxPlayerStructures = 0;
    bGlobalCeaseFire = false;
    GlobalEnvironmentAbilityActor = NULL;
    bSupportRuntimeShutdownOfGameplayModifiers = true;
    StructuralSupportSystem = NULL;
    CurieManager = NULL;
    ZoneTheme = NULL;
    ThreatVisualsManager = NULL;
    ThreatParticleActor = NULL;
    bDrawRunVariationDebug = false;
    VariationIndex = 0;
    GameDifficulty = 1;
    bIsGroupContent = false;
    DifficultyIncreaseRewardTier = 0;
    bAllowedToUpdateBackendDifficulty = false;
    bAllowedToOverrideBackendRewards = false;
    UIMapManager = NULL;
    CharacterCosmeticManager = NULL;
    SkinWeightManager = NULL;
    ScoringTableRowName = TEXT("Default");
    TotalCombatScore = 0;
    TotalBuildingScore = 0;
    TotalUtilityScore = 0;
    bAllowBuildingCostMods = true;
    bFreeBuildingRepairs = false;
    bAllowBuildingAtLayoutRequirements = true;
    bAllowBuildingWithoutLayoutRequirements = true;
    bAllowLayoutRequirementsFeature = true;
    bAllowBuildingThroughBlockingObjects = true;
    NumSurvivorsSpawned = 0;
    NumSurvivorsDead = 0;
    NumSurvivorsRescued = 0;
    ServerStability = EServerStability::Stable;
    CreativePortalManager = NULL;
    CreativeRealEstatePlotManager = NULL;
    bUseMaxBackpackSize = false;
}

