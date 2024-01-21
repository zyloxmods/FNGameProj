#include "FortMinigame.h"
#include "FortCreativeCreatureManagerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortMinigame::WasInProgress() const {
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


bool AFortMinigame::SetTeamForPlayer(AFortPlayerState* PlayerState, uint8 NewTeam, bool bTemporary) {
    return false;
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

void AFortMinigame::OnRep_StatsChanged() {
}

void AFortMinigame::OnRep_CurrentState() {
}

void AFortMinigame::OnPlayerPawnPossessedDuringTransition(APawn* PlayerPawn) {
}

void AFortMinigame::OnPlayerPawnPossessedDuringMinigame(APawn* PlayerPawn) {
}

void AFortMinigame::OnPlayerPawnDiedDuringMinigame(AFortPlayerPawnAthena* PlayerPawn) {
}

void AFortMinigame::OnInGameLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText) {
}

void AFortMinigame::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
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

bool AFortMinigame::IsWinningPlayerId(const FUniqueNetIdRepl& PlayerID) const {
    return false;
}

bool AFortMinigame::IsTransitioning() const {
    return false;
}

bool AFortMinigame::IsPregame() const {
    return false;
}

bool AFortMinigame::IsPostGame() const {
    return false;
}

bool AFortMinigame::IsPlayerTeleportingOrRespawningForGameplay(AFortPlayerStateAthena* PlayerToCheck) {
    return false;
}

bool AFortMinigame::IsPlayerSpectatingMinigame(const AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortMinigame::IsPlayerOutOfLives(const AFortPlayerState* InPlayerState) const {
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

bool AFortMinigame::IsInSetup() const {
    return false;
}

bool AFortMinigame::IsInProgress() const {
    return false;
}

bool AFortMinigame::IsGameWinnerShown() const {
    return false;
}

bool AFortMinigame::IsAnyPlayerSpawnLimited() const {
    return false;
}

bool AFortMinigame::IsAnyEndConditionComplete() {
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

float AFortMinigame::GetWarmupTimeRemaining() const {
    return 0.0f;
}

float AFortMinigame::GetTimeRemainingUntilAutoStart() const {
    return 0.0f;
}

float AFortMinigame::GetTimeRemaining() const {
    return 0.0f;
}

uint8 AFortMinigame::GetTeamToSwapToWhenOutOfSpawns(const AFortPlayerState* PlayerState) const {
    return 0;
}

int32 AFortMinigame::GetStatForPlayerId(const FUniqueNetIdRepl& PlayerID, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const {
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

void AFortMinigame::GetScoreboardRows(TArray<FMinigameScoreboardBucketRow>& OutScoreboardRows, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins) const {
}

bool AFortMinigame::GetScoreboardRowForPlayerBucket(int32 BucketIndex, FMinigameScoreboardBucketRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins) const {
    return false;
}

bool AFortMinigame::GetScoreboardRowForPlayer(AFortPlayerState* PlayerState, FMinigameScoreboardPlayerRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins) const {
    return false;
}

float AFortMinigame::GetRuntime() const {
    return 0.0f;
}

int32 AFortMinigame::GetRoundWinner(int32 Round) const {
    return 0;
}

bool AFortMinigame::GetRoundBasedGameWinnerName(FText& OutName) const {
    return false;
}

float AFortMinigame::GetPostGameTimeRemaining() const {
    return 0.0f;
}

float AFortMinigame::GetPostGameResetDelay() const {
    return 0.0f;
}

void AFortMinigame::GetPlayerStartComponentsByTagQuery(TArray<UFortMinigamePlayerStartComponent*>& OutPlayerStartComponents, const FGameplayTagQuery& TagQuery) {
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

bool AFortMinigame::GetEndConditionValueForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, int32& OutValue) {
    return false;
}

bool AFortMinigame::GetEndConditionForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, FMinigameEndCondition& OutEndCondition) {
    return false;
}

bool AFortMinigame::GetCurrentRoundWinnerName(FText& OutName) const {
    return false;
}

int32 AFortMinigame::GetCurrentRoundWinner() const {
    return 0;
}

int32 AFortMinigame::GetBucketForPlayerState(const APlayerState* PlayerState) const {
    return 0;
}

int32 AFortMinigame::GetBucketForPlayerId(const FUniqueNetIdRepl& PlayerID) const {
    return 0;
}

bool AFortMinigame::GetAirSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation) {
    return false;
}

FText AFortMinigame::FormatStat(TSubclassOf<UFortMinigameStatFilter> InStat, int32 InValue) {
    return FText::GetEmpty();
}

bool AFortMinigame::EvaluateStatQuery(const FMinigameEndCondition& InEndCondition) const {
    return false;
}

void AFortMinigame::EndGame(AFortPlayerController* InstigatorPC, EFortMinigameEnd EndMethod) {
}

void AFortMinigame::DoRep_UIExtensionTags() {
}

bool AFortMinigame::DoAllPlayersHaveSpawnLocation(EFortMinigamePlayerSpawnLocationSetting SpawnLocation) const {
    return false;
}

bool AFortMinigame::DetermineSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation, bool& bOutRespawningOnGround) {
    return false;
}

void AFortMinigame::ClearTeleportForMinigame(AFortPlayerPawn* InPawn) {
}

void AFortMinigame::ClearPlayerInventory(AFortPlayerControllerAthena* PlayerController) {
}

AActor* AFortMinigame::ChoosePlayerStart_Implementation(AController* Player) {
    return NULL;
}

bool AFortMinigame::CheckRemainingLivingPlayersForEndCondition() {
    return false;
}

void AFortMinigame::CheckEndConditionsInternal() {
}

void AFortMinigame::CheckEndConditions() {
}

bool AFortMinigame::CheckCustomEndConditions() {
    return false;
}

bool AFortMinigame::CanPlayerRespawn(const AFortPlayerState* InPlayerState) const {
    return false;
}

void AFortMinigame::BroadcastStatsChangedDelegate() {
}

bool AFortMinigame::AreEnoughPlayersLeftToContinueMatch() {
    return false;
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

void AFortMinigame::AddMinigamePlayer(AFortPlayerState* PlayerState) {
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
    DOREPLIFETIME(AFortMinigame, bAllowJoinInProgress);
    DOREPLIFETIME(AFortMinigame, MinigameStarter);
    DOREPLIFETIME(AFortMinigame, MinigameMapWidget);
    DOREPLIFETIME(AFortMinigame, WinningTeamIndex);
    DOREPLIFETIME(AFortMinigame, NumMinigameComponentsServer);
    DOREPLIFETIME(AFortMinigame, bVolumeNavigationHasBuilt);
    DOREPLIFETIME(AFortMinigame, RoundWinHistory);
    DOREPLIFETIME(AFortMinigame, PlayerBuckets);
}

AFortMinigame::AFortMinigame() {
    this->TimeLimit = 0.00f;
    this->CurrentRound = 1;
    this->TotalRounds = 1;
    this->DisplayName = FText::FromString(TEXT("Game"));
    this->AutoStartDelay = 0;
    this->SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    this->PostGameSpawnLocationSetting = EFortMinigamePostGameSpawnLocationSetting::IslandStart;
    this->WarmupDuration = 3.00f;
    this->PostGameResetDelay = 10.00f;
    this->GameWinnerDisplayTime = 0.00f;
    this->GameScoreDisplayTime = 0.00f;
    this->RoundWinnerDisplayTime = 0.00f;
    this->RoundScoreDisplayTime = 0.00f;
    this->bTimerCountsDown = true;
    this->CurrentState = EFortMinigameState::PreGame;
    this->PreviousState = EFortMinigameState::PreGame;
    this->CompletionTimeStatFilter = NULL;
    this->PlayerDeathsStatFilter = NULL;
    this->MaxLivesForPlayer = 0;
    this->TeamToSwapToWhenOutOfSpawns = EFortTeam::Spectator;
    this->AutoEndTeamThreshold = 0;
    this->bStopwatchMode = false;
    this->LastRoundDuration = 340282346638528859811704183484516925440.00f;
    this->CreatureManagerComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerComponent>(TEXT("CreatureManagerComponent"));
    this->Volume = NULL;
    this->bSortScoreboardEntries = true;
    this->bTeamMinigame = false;
    this->LivePlayerScript = NULL;
    this->NumTeams = 0;
    this->bAllowJoinInProgress = false;
    this->MinigameStarter = NULL;
    this->TeamRotationSetting = 0;
    this->TeamRotationCount = 0;
    this->MinigameMapWidget = EMinigameFullscreenMapWidgetType::Default_Map;
    this->MinigameStartCameraBehavior = TEXT("MinigameStart");
    this->MinigameEndCameraBehavior = TEXT("MinigameEnd");
    this->WinningTeamIndex = 255;
    this->NumMinigameComponentsServer = -1;
    this->bVolumeNavigationHasBuilt = false;
}

