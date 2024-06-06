#include "FortMinigame.h"
#include "CreativePlayerHealthInfoComponent.h"
#include "FortCreativeCreatureManagerComponent.h"
#include "FortCreativeTeleporterManagerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortMinigame::WasInProgress() const {
    return false;
}

bool AFortMinigame::UseTeamScoring() const {
    return false;
}

void AFortMinigame::UnregisterVolumeAsNavigationObserver(USceneComponent* RegisteredComponent) {
}

void AFortMinigame::ToggleAutoRestartMinigame() {
}

void AFortMinigame::StartMinigame_Implementation(AFortPlayerController* InstigatorPC) {
}

bool AFortMinigame::ShouldRotateTeams() const {
    return false;
}

bool AFortMinigame::ShouldDropOrDestroyItem_Implementation(bool& bShouldDrop, bool& bShouldDestroy, AFortPlayerController* PC, const UFortWorldItemDefinition* ItemDef) const {
    return false;
}

void AFortMinigame::SetWinningTeamIndex(const uint8 InWinningTeamIndex) {
}


void AFortMinigame::SetTimeAliveStat(AFortPlayerController* PlayerController, const float TimeAliveSeconds) {
}

void AFortMinigame::SetTeamNameForTeam(uint8 TeamIndex, const FString& TeamName) {
}

bool AFortMinigame::SetTeamForPlayer(AFortPlayerState* PlayerState, uint8 NewTeam, bool bTemporary, bool bChangeTeamWithoutRespawn) {
    return false;
}

void AFortMinigame::SetTeamColorIndexForTeam(uint8 TeamIndex, int32 TeamColorIndex) {
}

void AFortMinigame::SetStatForPlayerId(const FUniqueNetIdRepl& InPlayerID, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::SetStatForPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::SetStatForPlayer(const AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::SetStatForGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

bool AFortMinigame::SetPvPTeamForPlayer(AFortPlayerState* PlayerState, int32 Team, bool bTemporary) {
    return false;
}

void AFortMinigame::SetMaxInitTeamSizeForTeam(uint8 TeamIndex, int32 TeamSize) {
}

void AFortMinigame::SetLapTimeStat(AFortPlayerController* PlayerController, const float LapTimeSeconds) {
}

void AFortMinigame::SetInitTeamSizeWeightForTeam(uint8 TeamIndex, int32 TeamSizeWeight) {
}

void AFortMinigame::SetClassSlotName(uint8 ClassSlotIndex, const FString& ClassName) {
}

void AFortMinigame::SetClassSlotInventory(uint8 ClassSlotIndex, const TArray<FItemAndCount>& InventoryItems) {
}

bool AFortMinigame::SetClassSlotForPlayer(AFortPlayerState* PlayerState, uint8 NewClassSlot, FOnPlayerChangedClass OnComplete, bool bRespawnPlayer, bool bResetCurrentVitals, bool bClearAllItems, float ClassSwitchDelay) {
    return false;
}

void AFortMinigame::ServerEventLogScoreChanged(EFortQuestObjectiveStatEvent Type, UObject* TargetObject, AFortPlayerController* PlayerController, const FGameplayTagContainer& TargetTags, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, int32 Count) {
}

void AFortMinigame::ServerEventLogRoundEnded(AFortPlayerController* InstigatorPC, EFortMinigameEnd EndMethod, EFortMinigameState NextState) {
}

void AFortMinigame::ServerEventLogMinigameState(EFortMinigameState NewState, int32 Duration) {
}

void AFortMinigame::RestartMinigame_Implementation(AFortPlayerController* InstigatorPC) {
}

void AFortMinigame::ResetStats() {
}

void AFortMinigame::RemoveMinigamePlayer(AFortPlayerState* PlayerState) {
}

void AFortMinigame::RemoveMinigameComponent(UFortMinigameLogicComponent* MinigameComponent) {
}

void AFortMinigame::RemoveMinigameActor(AActor* Actor) {
}

void AFortMinigame::RemoveEndConditionForTeam(uint8 TeamIndex, const FFortMinigameStatQuery& StatQuery) {
}

void AFortMinigame::RemoveEndCondition(const FFortMinigameStatQuery& StatQuery) {
}

void AFortMinigame::RegisterVolumeAsNavigationObserver() {
}

void AFortMinigame::RefreshVoiceForPlayers() {
}

void AFortMinigame::RefreshVoiceForPlayer(AFortPlayerState* PlayerState) {
}

void AFortMinigame::RefreshGameRulesPreview() {
}

void AFortMinigame::RecheckInventory(APawn* PlayerPawn) {
}

void AFortMinigame::QueueAllAIForDespawn() {
}

void AFortMinigame::PutPlayerIntoStasis(APawn* PlayerPawn) {
}

void AFortMinigame::PutPlayerControllerIntoStasis(AFortPlayerController* PlayerController) {
}

void AFortMinigame::PostGameResetPlayers() {
}

bool AFortMinigame::OverridePlayerSpawnLocation_Implementation(APawn* PlayerPawn, AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation, bool& bOutRespawningOnGround) {
    return false;
}

void AFortMinigame::OnVolumeStateChanged(EVolumeState NewState, AFortVolume* ChangedVolume) {
}

void AFortMinigame::OnTimeLimitElapsed() {
}

void AFortMinigame::OnSpawningFromSaveFinish() {
}

void AFortMinigame::OnRep_Volume() {
}

void AFortMinigame::OnRep_TeamArray() {
}

void AFortMinigame::OnRep_StatsChanged() {
}

void AFortMinigame::OnRep_ServerTime() {
}

void AFortMinigame::OnRep_PlayerBuckets() {
}

void AFortMinigame::OnRep_MinigamePlayer() {
}

void AFortMinigame::OnRep_CurrentState() {
}

void AFortMinigame::OnRep_CurrentRound() {
}

void AFortMinigame::OnRep_ClassSlotArray() {
}

void AFortMinigame::OnPlayerStateTeamIndexChanged() {
}

void AFortMinigame::OnPlayerPawnPossessedDuringTransition(APawn* PlayerPawn) {
}

void AFortMinigame::OnPlayerPawnPossessedDuringMinigame(APawn* PlayerPawn) {
}

void AFortMinigame::OnMinigameStatChanged(const AFortPlayerController* InStatOwner, const TSubclassOf<UFortMinigameStatFilter>& TrackedStatClass, int32 Count) {
}

void AFortMinigame::OnInGameLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText) {
}

void AFortMinigame::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMinigame::OnFortPlayerDied(AFortPlayerPawnAthena* FortPlayerPawnAthena) {
}

void AFortMinigame::OnEndGameReturnPlayersFromMatchmaking() {
}

void AFortMinigame::OnClientFinishTeleportingForMinigame(AFortPlayerPawn* InPawn) {
}

bool AFortMinigame::OnCheckIfClientIsSafeToRespawn(AFortPlayerControllerAthena* PlayerController) {
    return false;
}

void AFortMinigame::OnBeginSpectating(AFortPlayerStateZone* FPSZ) {
}

void AFortMinigame::NotifyStatEvent(EFortQuestObjectiveStatEvent Type, UObject* TargetObject, AFortPlayerController* PlayerController, const FGameplayTagContainer& TargetTags, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, int32 Count) {
}

void AFortMinigame::NativeExitedVolumeEvent(AFortPlayerState* LeftPlayerState) {
}

void AFortMinigame::NativeEnteredVolumeEvent(AFortPlayerState* PlayerState) {
}

void AFortMinigame::MoveMinigamePlayerToSpectate(AFortPlayerState* PlayerState) {
}

void AFortMinigame::LTMFlowDisableMatchmakingBackfillAndJoinInProgress() {
}


void AFortMinigame::K2_IsInProgress(EFortMinigameExec& OutExec) {
}

void AFortMinigame::K2_HasStarted(EFortMinigameExec& OutExec) {
}

void AFortMinigame::K2_ExitedVolumeEvent_Implementation(AFortPlayerState* LeftPlayerState) {
}

void AFortMinigame::K2_EnteredVolumeEvent_Implementation(AFortPlayerState* PlayerState) {
}

bool AFortMinigame::IsWinningPlayerState(const APlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsWinningPlayerId(const FUniqueNetIdRepl& PlayerId) const {
    return false;
}

bool AFortMinigame::IsWaitingForCameras() const {
    return false;
}

bool AFortMinigame::IsTransitioning() const {
    return false;
}

bool AFortMinigame::IsTeamMinigame() const {
    return false;
}

bool AFortMinigame::IsPregame() const {
    return false;
}

bool AFortMinigame::IsPostGame() const {
    return false;
}

bool AFortMinigame::IsPlayerUsingClassSlot(AFortPlayerState* PlayerState, uint8 ClassSlot) const {
    return false;
}

bool AFortMinigame::IsPlayerTeleportingOrRespawningForGameplay(AFortPlayerStateAthena* PlayerToCheck) {
    return false;
}

bool AFortMinigame::IsPlayerSpectatingMinigame(const AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerPersistenceRequired(const AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerOutOfLives(const AFortPlayerState* InPlayerState, const bool bOnlyMinigamePlayers) const {
    return false;
}

bool AFortMinigame::IsPlayerOnRoundWinningTeam(AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerOnGameWinningTeam(AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerLocationBlockedForTeleport(AFortPlayerPawnAthena* PlayerPawn) {
    return false;
}

bool AFortMinigame::IsPlayerInOurVolume(AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerInMinigameByNetId(const FUniqueNetIdRepl& UniqueNetId, bool bCheckSpectatingPlayers) const {
    return false;
}

bool AFortMinigame::IsPlayerInMinigame(const AFortPlayerState* PlayerState, bool bCheckSpectatingPlayers) const {
    return false;
}

bool AFortMinigame::IsMinigameStarting() const {
    return false;
}

bool AFortMinigame::IsMinigameStarter(AFortPlayerController* PlayerController) const {
    return false;
}

bool AFortMinigame::IsMinigameComponent(UFortMinigameLogicComponent* MinigameComponent) const {
    return false;
}

bool AFortMinigame::IsMinigameActor(AActor* Actor) const {
    return false;
}

bool AFortMinigame::IsLocationInsideTerrain(FVector Location, FHitResult& OutHit) {
    return false;
}

bool AFortMinigame::IsLocationBlockedForTeleport(AFortPlayerState* PlayerState, FVector LocationToCheck, FRotator RotationToCheck) {
    return false;
}

bool AFortMinigame::IsLastRound() const {
    return false;
}

bool AFortMinigame::IsInWarmup() const {
    return false;
}

bool AFortMinigame::IsInSetup() const {
    return false;
}

bool AFortMinigame::IsInProgress() const {
    return false;
}

bool AFortMinigame::IsInPlayMode() const {
    return false;
}

bool AFortMinigame::IsGameWinnerShown() const {
    return false;
}

bool AFortMinigame::IsCuratedHub() const {
    return false;
}

bool AFortMinigame::IsAnyPlayerSpawnLimited() const {
    return false;
}

bool AFortMinigame::IsActorPositionInsideTerrain(AActor* Actor, FHitResult& OutHit) {
    return false;
}

void AFortMinigame::HighlightTopStats(TArray<FMinigameScoreboardBucketRow>& InOutScoreboardRows) {
}

bool AFortMinigame::HasTimeLimit() const {
    return false;
}

bool AFortMinigame::HasStarted() const {
    return false;
}

bool AFortMinigame::HasPlayerStartPads_Implementation(const AFortPlayerState* InPlayerState) const {
    return false;
}

bool AFortMinigame::HasMinigameStarter() const {
    return false;
}

void AFortMinigame::HandleVolumeEditModeChange_Implementation(bool bInEditMode) {
}

void AFortMinigame::HandleReplicationComplete(AFortPlayerControllerAthena* PlayerController) {
}

void AFortMinigame::HandleMinigameWarmup_Implementation() {
}

void AFortMinigame::HandleMinigameStarted_Implementation() {
}

void AFortMinigame::HandleMinigameEnded_Implementation() {
}

void AFortMinigame::HandleMinigameComponentRemoved_Implementation(UFortMinigameLogicComponent* MinigameComponent) {
}

void AFortMinigame::HandleMinigameComponentInPlayChanged_Implementation(UFortMinigameLogicComponent* MinigameComponent) {
}

void AFortMinigame::HandleMinigameComponentAdded_Implementation(UFortMinigameLogicComponent* MinigameComponent) {
}

uint8 AFortMinigame::GetWinningTeamIndexFromTeamIndex(const uint8 InTeamIndex) const {
    return 0;
}

float AFortMinigame::GetWarmupTimeRemaining() const {
    return 0.0f;
}

float AFortMinigame::GetTimeRemainingUntilAutoStart() const {
    return 0.0f;
}

float AFortMinigame::GetTimeRemaining() const {
    return 0.0f;
}

UFortCreativeTeleporterManagerComponent* AFortMinigame::GetTeleporterManagerComponent() {
    return NULL;
}

uint8 AFortMinigame::GetTeamToSwapToWhenOutOfSpawns(const AFortPlayerState* PlayerState) const {
    return 0;
}

FText AFortMinigame::GetTeamName(uint8 TeamIndex) const {
    return FText::GetEmpty();
}

uint8 AFortMinigame::GetTeamIndexForCosmeticDetails(uint8 TeamIndex) const {
    return 0;
}

int32 AFortMinigame::GetTeamColorIndex(uint8 TeamIndex) const {
    return 0;
}

int32 AFortMinigame::GetStatForPlayerId(const FUniqueNetIdRepl& PlayerId, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const {
    return 0;
}

int32 AFortMinigame::GetStatForPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const {
    return 0;
}

int32 AFortMinigame::GetStatForPlayer(const AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const {
    return 0;
}

int32 AFortMinigame::GetStatForGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const {
    return 0;
}

FGameplayTagQuery AFortMinigame::GetStartQueryForPlayer_Implementation(APlayerState* Player) {
    return FGameplayTagQuery{};
}

int32 AFortMinigame::GetStandingsForPlayer(const AFortPlayerState* InPlayerState, TSubclassOf<UFortMinigameStatFilter> InFilter, TArray<FMinigameStatRow>& OutStatRows, int32 RowsReturned) {
    return 0;
}

EFortMinigamePlayerSpawnLocationSetting AFortMinigame::GetSpawnLocationSetting(const AFortPlayerState* PlayerState) const {
    return EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
}

void AFortMinigame::GetScoreboardStateTimes(TArray<float>& outStateTimes) {
}

void AFortMinigame::GetScoreboardRows(TArray<FMinigameScoreboardBucketRow>& OutScoreboardRows, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const {
}

bool AFortMinigame::GetScoreboardRowForPlayerBucket(int32 BucketIndex, FMinigameScoreboardBucketRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const {
    return false;
}

bool AFortMinigame::GetScoreboardRowForPlayer(AFortPlayerState* PlayerState, FMinigameScoreboardPlayerRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const {
    return false;
}

float AFortMinigame::GetRuntime() const {
    return 0.0f;
}

int32 AFortMinigame::GetRoundWinner(int32 Round) const {
    return 0;
}

int32 AFortMinigame::GetRoundBasedGameWinnerNameOrTeam(FText& OutName) const {
    return 0;
}

int32 AFortMinigame::GetRoundBasedGameWinnerName(FText& OutName) const {
    return 0;
}

float AFortMinigame::GetPostGameTimeRemaining() const {
    return 0.0f;
}

float AFortMinigame::GetPostGameResetDelay(EFortMinigameEnd EndMethod) const {
    return 0.0f;
}

void AFortMinigame::GetPlayerStartComponentsByTagQuery(TArray<UFortMinigamePlayerStartComponent*>& OutPlayerStartComponents, const FGameplayTagQuery& TagQuery) {
}

int32 AFortMinigame::GetPlayerPlacement(const APlayerState* PlayerState) const {
    return 0;
}

int32 AFortMinigame::GetPlayerCount(bool bIncludeSpectators) const {
    return 0;
}

void AFortMinigame::GetParticipatingPlayers(TArray<AFortPlayerState*>& OutPlayers) const {
}

bool AFortMinigame::GetOrderedMinigameStatsRows(TArray<FMinigameStatRow>& OutStats) {
    return false;
}

EMinigameFullscreenMapWidgetType AFortMinigame::GetMinigameMapPanelDisplayType() const {
    return EMinigameFullscreenMapWidgetType::Default_Map;
}

void AFortMinigame::GetMinigameComponentsByTagQuery(TArray<UFortMinigameLogicComponent*>& OutComponents, const FGameplayTagQuery& TagQuery) const {
}

int32 AFortMinigame::GetMaxLivesForPlayer(const AFortPlayerState* PlayerState) const {
    return 0;
}

int32 AFortMinigame::GetMaxInitTeamSize(uint8 TeamIndex) const {
    return 0;
}

int32 AFortMinigame::GetInitTeamSizeWeight(uint8 TeamIndex) const {
    return 0;
}

bool AFortMinigame::GetEndConditionValueForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, int32& OutValue) {
    return false;
}

bool AFortMinigame::GetEndConditionForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, FMinigameEndCondition& OutEndCondition) {
    return false;
}

uint8 AFortMinigame::GetDefaultClassSlot(const AFortPlayerState* PlayerState) const {
    return 0;
}

bool AFortMinigame::GetCurrentRoundWinnerName(FText& OutName) const {
    return false;
}

int32 AFortMinigame::GetCurrentRoundWinner() const {
    return 0;
}

FText AFortMinigame::GetClassSlotName(uint8 ClassSlotIndex) const {
    return FText::GetEmpty();
}

bool AFortMinigame::GetClassSlotInventory(uint8 ClassSlotIndex, TArray<FItemAndCount>& InventoryItems) const {
    return false;
}

uint8 AFortMinigame::GetClassSlotForPlayer(AFortPlayerState* PlayerState, const bool bUseDeathInfo) const {
    return 0;
}

bool AFortMinigame::GetBucketWinCount(int32& WinCount, const int32 BucketIndex) const {
    return false;
}

int32 AFortMinigame::GetBucketForPlayerState(const APlayerState* PlayerState) const {
    return 0;
}

int32 AFortMinigame::GetBucketForPlayerId(const FUniqueNetIdRepl& PlayerId) const {
    return 0;
}

bool AFortMinigame::GetAirSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation) {
    return false;
}

FText AFortMinigame::FormatStat(TSubclassOf<UFortMinigameStatFilter> InStat, int32 InValue) {
    return FText::GetEmpty();
}

bool AFortMinigame::ForceRespawn(AFortPlayerState* PlayerState, FGameplayTagContainer& RespawnReasons) {
    return false;
}

bool AFortMinigame::EvaluateStatQuery(const FMinigameEndCondition& InEndCondition, const int32 PlayerBucketIndex) const {
    return false;
}

void AFortMinigame::EndGame(AFortPlayerController* InstigatorPC, EFortMinigameEnd EndMethod) {
}

void AFortMinigame::DoRep_UIExtensionTags() {
}

bool AFortMinigame::DoesTimerCountDown() const {
    return false;
}

bool AFortMinigame::DoAllPlayersHaveSpawnLocation(EFortMinigamePlayerSpawnLocationSetting SpawnLocation) const {
    return false;
}

bool AFortMinigame::DetermineSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation, bool& bOutRespawningOnGround) {
    return false;
}

void AFortMinigame::DeclareWinnerImmediately(int32 WinningBucket) {
}

void AFortMinigame::ClearTeleportForMinigame(AFortPlayerPawn* InPawn) {
}

void AFortMinigame::ClearPlayerInventory(AFortPlayerControllerAthena* PlayerController) {
}

AActor* AFortMinigame::ChoosePlayerStart(AController* Player) {
    return NULL;
}

bool AFortMinigame::CheckRemainingLivingPlayersForEndCondition() {
    return false;
}

void AFortMinigame::CheckEndConditionsInternal() {
}

void AFortMinigame::CheckEndConditions() {
}

bool AFortMinigame::CanPlayerRespawn(const AFortPlayerState* InPlayerState) const {
    return false;
}

void AFortMinigame::CancelPendingClassSlotChange(AFortPlayerState* PlayerState, uint8 PendingClassSlot) {
}

void AFortMinigame::BroadcastStatsChangedDelegate() {
}

bool AFortMinigame::AreTeamsAsymmetrical() const {
    return false;
}

bool AFortMinigame::AreEnoughPlayersLeftToContinueMatch() {
    return false;
}

void AFortMinigame::ApplyMutatorsToPlayer(AFortPlayerState* PlayerState, bool bResetCurrentVitals) {
}

void AFortMinigame::AdvanceState() {
}

void AFortMinigame::AddStatToPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::AddStatToPlayer(AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::AddStatToGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue) {
}

void AFortMinigame::AddOrOverrideEndConditionForTeam(uint8 TeamIndex, const FFortMinigameStatQuery& StatQuery) {
}

void AFortMinigame::AddOrOverrideEndCondition(const FFortMinigameStatQuery& StatQuery) {
}

void AFortMinigame::AddMinigamePlayer(AFortPlayerState* PlayerState, bool bForceSpawn) {
}

void AFortMinigame::AddMinigameComponent(UFortMinigameLogicComponent* MinigameComponent) {
}

void AFortMinigame::AddMinigameActor(AActor* Actor) {
}

void AFortMinigame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMinigame, UIExtensionTags);
    DOREPLIFETIME(AFortMinigame, TimeLimit);
    DOREPLIFETIME(AFortMinigame, CurrentRound);
    DOREPLIFETIME(AFortMinigame, TotalRounds);
    DOREPLIFETIME(AFortMinigame, PlayerArray);
    DOREPLIFETIME(AFortMinigame, SpectatingPlayerArray);
    DOREPLIFETIME(AFortMinigame, EndConditionArray);
    DOREPLIFETIME(AFortMinigame, DisplayName);
    DOREPLIFETIME(AFortMinigame, AutoStartDelay);
    DOREPLIFETIME(AFortMinigame, SpawnLocationSetting);
    DOREPLIFETIME(AFortMinigame, PostGameSpawnLocationSetting);
    DOREPLIFETIME(AFortMinigame, WarmupDuration);
    DOREPLIFETIME(AFortMinigame, PostGameResetDelay);
    DOREPLIFETIME(AFortMinigame, GameWinnerDisplayTime);
    DOREPLIFETIME(AFortMinigame, GameScoreDisplayTime);
    DOREPLIFETIME(AFortMinigame, RoundWinnerDisplayTime);
    DOREPLIFETIME(AFortMinigame, RoundScoreDisplayTime);
    DOREPLIFETIME(AFortMinigame, bTimerCountsDown);
    DOREPLIFETIME(AFortMinigame, TeamArray);
    DOREPLIFETIME(AFortMinigame, ClassSlotArray);
    DOREPLIFETIME(AFortMinigame, TrackedStats);
    DOREPLIFETIME(AFortMinigame, ScoreboardStats);
    DOREPLIFETIME(AFortMinigame, RoundStats);
    DOREPLIFETIME(AFortMinigame, GameStats);
    DOREPLIFETIME(AFortMinigame, CurrentState);
    DOREPLIFETIME(AFortMinigame, ServerTime);
    DOREPLIFETIME(AFortMinigame, bStopwatchMode);
    DOREPLIFETIME(AFortMinigame, Volume);
    DOREPLIFETIME(AFortMinigame, bSortScoreboardEntries);
    DOREPLIFETIME(AFortMinigame, bTeamMinigame);
    DOREPLIFETIME(AFortMinigame, bTeamsAreStable);
    DOREPLIFETIME(AFortMinigame, NumTeams);
    DOREPLIFETIME(AFortMinigame, bAllowJoinInProgress);
    DOREPLIFETIME(AFortMinigame, MinigameStarter);
    DOREPLIFETIME(AFortMinigame, TeamRotationCount);
    DOREPLIFETIME(AFortMinigame, bStableTeamCosmetics);
    DOREPLIFETIME(AFortMinigame, MinigameMapWidget);
    DOREPLIFETIME(AFortMinigame, WinCondition);
    DOREPLIFETIME(AFortMinigame, bOnlyAllowRespawningIfPlayerStartPadsFound);
    DOREPLIFETIME(AFortMinigame, GameEndCallout);
    DOREPLIFETIME(AFortMinigame, VictoryAudioIndex);
    DOREPLIFETIME(AFortMinigame, DrawAudioIndex);
    DOREPLIFETIME(AFortMinigame, DefeatAudioIndex);
    DOREPLIFETIME(AFortMinigame, bShowCumulativeScoreboard);
    DOREPLIFETIME(AFortMinigame, bAllowFriendlyFire);
    DOREPLIFETIME(AFortMinigame, NumMinigameComponentsServer);
    DOREPLIFETIME(AFortMinigame, bVolumeNavigationHasBuilt);
    DOREPLIFETIME(AFortMinigame, RoundWinHistory);
    DOREPLIFETIME(AFortMinigame, PlayerBuckets);
}

AFortMinigame::AFortMinigame() {
    TimeLimit = 1;
    CurrentRound = 0;
    TotalRounds = 0;
    bRemovePawnOnDeath = false;
    PlayerDeathsStatFilter = NULL;
    bKeepItemsBetweenRounds = false;
    PercentageOfResourcesKeptBetweenRounds = 1;
    bReloadAndRestockWeaponsEachRound = false;
    DefaultRestockAmmoAmount = 0;
    bLastTeamStandingWins = false;
    bAllowStandardEndGameConditions = true;
    bEndGameOnMatchPointWin = false;
    DisplayName = FText::FromString(TEXT("Game"));
    AutoStartDelay = 0;
    SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    PostGameSpawnLocationSetting = EFortMinigamePostGameSpawnLocationSetting::IslandStart;
    WarmupDuration = 1;
    PostGameResetDelay = 1;
    GameWinnerDisplayTime = 1;
    GameScoreDisplayTime = 1;
    RoundWinnerDisplayTime = 1;
    RoundScoreDisplayTime = 1;
    ServerEndgameDelay = 1;
    bTimerCountsDown = true;
    CurrentState = EFortMinigameState::PreGame;
    PreviousState = EFortMinigameState::PreGame;
    CompletionTimeStatFilter = NULL;
    ScoreStatFilter = NULL;
    LapTimeStatFilter = NULL;
    TimeAliveStatFilter = NULL;
    DefaultClassSlot = 255;
    ClassResetType = EFortMinigameClassResetType::Never;
    MaxLivesForPlayer = 0;
    TeamToSwapToWhenOutOfSpawns = 0;
    AutoEndTeamThreshold = 0;
    bStopwatchMode = false;
    LastRoundDuration = 1;
    CreatureManagerComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerComponent>(TEXT("CreatureManagerComponent"));
    TeleporterManagerComponent = CreateDefaultSubobject<UFortCreativeTeleporterManagerComponent>(TEXT("TeleporterManagerComponent"));
    CreativePlayerHealthComponent = CreateDefaultSubobject<UCreativePlayerHealthInfoComponent>(TEXT("PlayerHealthComponent"));
    Volume = NULL;
    bSortScoreboardEntries = true;
    bTeamMinigame = false;
    bTeamsAreStable = false;
    NumTeams = 0;
    bAllowJoinInProgress = false;
    PlayerPersistence = EMinigamePlayerPersistence::None;
    MinigameStarter = NULL;
    TeamRotationSetting = 0;
    TeamRotationCount = 0;
    bStableTeamCosmetics = false;
    MinigameMapWidget = EMinigameFullscreenMapWidgetType::Default_Map;
    WinCondition = EMinigameWinCondition::MostRoundWins;
    bAllTeamsMustMatchEndConditions = false;
    bOnlyAllowRespawningIfPlayerStartPadsFound = false;
    GameEndCallout = EMinigameGameEndCallout::WinLose;
    VictoryAudioIndex = 0;
    DrawAudioIndex = 0;
    DefeatAudioIndex = 0;
    bShowCumulativeScoreboard = false;
    MinigameStartCameraBehavior = TEXT("MinigameStart");
    MinigameEndCameraBehavior = TEXT("MinigameEnd");
    bAllowFriendlyFire = false;
    NumMinigameComponentsServer = 0;
    bVolumeNavigationHasBuilt = false;
}

