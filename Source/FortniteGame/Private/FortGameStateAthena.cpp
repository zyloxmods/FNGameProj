#include "FortGameStateAthena.h"
#include "FortGameStateComponent_ActiveEventManager.h"
#include "FortGameStateComponent_Telemetry.h"
#include "FortMutatorListComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortGameStateAthena::UpdateAllGoldenPoiColor(FLinearColor Color, const FSlateFontInfo& Font) {
}

bool AFortGameStateAthena::ShouldReturnToMatchmakingOriginOnMatchEnd() const {
    return false;
}

bool AFortGameStateAthena::ShouldHaveInfiniteResources(const APawn* Pawn) const {
    return false;
}

bool AFortGameStateAthena::ShouldEnterSpawningStartup() const {
    return false;
}

bool AFortGameStateAthena::ShouldDBNOTeamInfoFlash() const {
    return false;
}

void AFortGameStateAthena::SetLocationTextWorldPosition(const FGameplayTag& LocationTag, FVector Location) {
}

void AFortGameStateAthena::SetLocationText(const FGameplayTag& LocationTag, const FText& Text, EMapLocationStateType State) {
}

void AFortGameStateAthena::SetLocationFontInState(const FGameplayTag& LocationTag, const FSlateFontInfo& Font, EMapLocationStateType State) {
}

void AFortGameStateAthena::SetLocationFontInAllStates(const FGameplayTag& LocationTag, const FSlateFontInfo& Font) {
}

void AFortGameStateAthena::SetLocationFont(const FGameplayTag& LocationTag, const FSlateFontInfo& Font) {
}

void AFortGameStateAthena::SetLocationColorInState(const FGameplayTag& LocationTag, FLinearColor Color, EMapLocationStateType State) {
}

void AFortGameStateAthena::SetLocationColor(const FGameplayTag& LocationTag, FLinearColor Color) {
}

void AFortGameStateAthena::SetLocation_StateColor(const FGameplayTag& LocationTag, const FLinearColor& Color, EMapLocationStateType State) {
}

void AFortGameStateAthena::SetFocalPointActor(AActor* InFocalPointActor, FVector InFocalPointOffset, float InFocalPointFOV, float InDuration) {
}

void AFortGameStateAthena::SetFloatingIslandInformation(FVector WorldPosition, bool bActivated) {
}

void AFortGameStateAthena::SetAllLocations_StateColor(const FLinearColor& Color, EMapLocationStateType State) {
}

void AFortGameStateAthena::RunPerfMemCheatScript_Client_Replicated_Implementation(bool bStartStatFiles) {
}

void AFortGameStateAthena::PauseFPSChartTimer() {
}

void AFortGameStateAthena::OverrideLocation_StateFontMaterial(const FGameplayTag& LocationTag, UMaterialInterface* Mat, EMapLocationStateType State) {
}

void AFortGameStateAthena::OverrideAllLocations_StateFontMaterial(UMaterialInterface* Mat, EMapLocationStateType State) {
}


void AFortGameStateAthena::OnRep_WinningTeamsCN() {
}

void AFortGameStateAthena::OnRep_WinningTeam() {
}

void AFortGameStateAthena::OnRep_WinningScore() {
}

void AFortGameStateAthena::OnRep_WinningPlayerState() {
}

void AFortGameStateAthena::OnRep_WinningPlayerList() {
}

void AFortGameStateAthena::OnRep_VolumeManager() {
}

void AFortGameStateAthena::OnRep_UtcTimeStartedMatch(const FDateTime& OldUtcTimeStartedMatch) {
}

void AFortGameStateAthena::OnRep_TeamsLeft() {
}

void AFortGameStateAthena::OnRep_SupplyDropWaveStartedSoundCue() {
}

void AFortGameStateAthena::OnRep_StormCapState() {
}

void AFortGameStateAthena::OnRep_SpectateAPartyMemberAvailable() {
}

void AFortGameStateAthena::OnRep_SkyTubesShuttingDown() {
}

void AFortGameStateAthena::OnRep_SkyTubesDisabled() {
}

void AFortGameStateAthena::OnRep_ServerChangelistNumber() {
}

void AFortGameStateAthena::OnRep_SafeZonePhase() {
}

void AFortGameStateAthena::OnRep_SafeZoneIndicator() {
}

void AFortGameStateAthena::OnRep_ReticulatedSplineDefinitions() {
}

void AFortGameStateAthena::OnRep_PlaylistEndTime() {
}

void AFortGameStateAthena::OnRep_PlayersLeft() {
}

void AFortGameStateAthena::OnRep_PlayerBotsLeft() {
}

void AFortGameStateAthena::OnRep_MutatorGenericInt_2() {
}

void AFortGameStateAthena::OnRep_MutatorGenericInt_1() {
}

void AFortGameStateAthena::OnRep_MutatorGenericInt_0() {
}

void AFortGameStateAthena::OnRep_MutatorEventData() {
}

void AFortGameStateAthena::OnRep_MeshNetworkStatus() {
}

void AFortGameStateAthena::OnRep_MapInfo() {
}

void AFortGameStateAthena::OnRep_GoldenPoiLocationTags() {
}

void AFortGameStateAthena::OnRep_GamePhase(EAthenaGamePhase OldGamePhase) {
}

void AFortGameStateAthena::OnRep_FocalPointActor() {
}

void AFortGameStateAthena::OnRep_EventTournamentRound() {
}

void AFortGameStateAthena::OnRep_EndGameKickPlayerTime() {
}

void AFortGameStateAthena::OnRep_DamageForStormCapMarking() {
}

void AFortGameStateAthena::OnRep_CurrentPlaylistInfo() {
}

void AFortGameStateAthena::OnRep_CurrentPlaylistId() {
}

void AFortGameStateAthena::OnRep_CurrentHighScore() {
}

void AFortGameStateAthena::OnRep_CosmeticUsage() {
}

void AFortGameStateAthena::OnRep_ClientItemDefsToLoad() {
}

void AFortGameStateAthena::OnRep_BroadcastSpectatorInfo() {
}

void AFortGameStateAthena::OnRep_bPlaylistStoppedSafeZonePhases() {
}

void AFortGameStateAthena::OnRep_Aircraft() {
}

void AFortGameStateAthena::OnRep_AIPawnCustomizationPreloadData() {
}

void AFortGameStateAthena::OnRep_AICharacterPartsPreloadData() {
}

void AFortGameStateAthena::OnRep_AdditionalGameFeaturePlugins() {
}

void AFortGameStateAthena::OnLoadedAllAdditionalContent() {
}

bool AFortGameStateAthena::IsWorldResourceWidgetVisible(const AFortPlayerController* Controller, const EFortResourceType ResourceType) const {
    return false;
}

bool AFortGameStateAthena::IsTeleportToCreativeHubAllowed(const AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortGameStateAthena::IsTeamSwitchAllowed(const APawn* SwitchingPawn) const {
    return false;
}

bool AFortGameStateAthena::IsStormCN() const {
    return false;
}

bool AFortGameStateAthena::IsResurrectionEnabled(AFortPlayerPawn* PlayerPawn) const {
    return false;
}

bool AFortGameStateAthena::IsPlaygroundModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsPlayerTriggeredRespawnAllowed(const AFortPlayerState* PlayerState) const {
    return false;
}

bool AFortGameStateAthena::IsLastManStandingCN() const {
    return false;
}

bool AFortGameStateAthena::IsLargePreviewDisabledOnMobile() const {
    return false;
}

bool AFortGameStateAthena::IsGuidedTutorialPlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsGamePhaseNotificationSkipped(EAthenaGamePhaseStep GamePhaseToSkip) const {
    return false;
}

bool AFortGameStateAthena::IsCreativeUtilitySpawningAllowedPlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeOrPlaygroundModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeOrBattleLabModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeMMPlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeLTMPlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsBattleLabModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::HasValidFocalPointActor() const {
    return false;
}

void AFortGameStateAthena::HandleHideGameModeMessageRequest(const EAthenaGameMsgType MsgType, const bool bInstantHide, const bool bClearQueue) {
}

void AFortGameStateAthena::HandleGameModeShowMarker(int32 PlayerId, int32 InstanceID) {
}

void AFortGameStateAthena::HandleGameModeMessageSuccess(AFortPlayerController* OwnerController) {
}

void AFortGameStateAthena::HandleGameModeMessageRequest(FAthenaGameMessageData MessageData) {
}

void AFortGameStateAthena::HandleGameModeMessageReposition(FVector2D position, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment) {
}

void AFortGameStateAthena::HandleGameModeMessageDefaultPosition() {
}

void AFortGameStateAthena::HandleGameModeHideMarker(int32 PlayerId, int32 InstanceID) {
}

void AFortGameStateAthena::HandleContextTutorialGameModeMessageRequest(FAthenaGameMessageData MessageData, UFortContextualTutorialController* OwnedController) {
}

FTotalPlayers AFortGameStateAthena::GetTotalPlayers() const {
    return FTotalPlayers{};
}

float AFortGameStateAthena::GetTimedWinConditionTime() const {
    return 0.0f;
}

FText AFortGameStateAthena::GetTeamPOIName(uint8 Team) const {
    return FText::GetEmpty();
}

TArray<AFortPlayerStateAthena*> AFortGameStateAthena::GetSquadMemberPlayerStates(AFortPlayerStateAthena* InstigatingPlayerState, const bool bIncludeSelf) const {
    return TArray<AFortPlayerStateAthena*>();
}

bool AFortGameStateAthena::GetShouldPlayRespawnTimerSFX() const {
    return false;
}

bool AFortGameStateAthena::GetShouldDisplayCountdownTimerText() const {
    return false;
}

AFortSafeZoneIndicator* AFortGameStateAthena::GetSafeZoneIndicator() const {
    return NULL;
}

FGameplayTagContainer AFortGameStateAthena::GetPoiGridTagsForLocation(const FVector& Location) const {
    return FGameplayTagContainer{};
}

EFortPlaylistType AFortGameStateAthena::GetPlaylistType() const {
    return EFortPlaylistType::Default;
}

bool AFortGameStateAthena::GetPlaylistTeams(TArray<uint8>& OutTeams) const {
    return false;
}

FPlayersLeft AFortGameStateAthena::GetPlayersLeft() const {
    return FPlayersLeft{};
}

float AFortGameStateAthena::GetOverridenSiphonWoodValue(const APawn* Pawn) const {
    return 0.0f;
}

float AFortGameStateAthena::GetOverridenSiphonStoneValue(const APawn* Pawn) const {
    return 0.0f;
}

float AFortGameStateAthena::GetOverridenSiphonMetalValue(const APawn* Pawn) const {
    return 0.0f;
}

float AFortGameStateAthena::GetOverridenSiphonHealthValue(const APawn* Pawn) const {
    return 0.0f;
}

float AFortGameStateAthena::GetOverridenSiphonGoldValue(const APawn* Pawn) const {
    return 0.0f;
}

FGameplayTagQuery AFortGameStateAthena::GetOverridenDamageSelfWeaponQuery(const APawn* Pawn) const {
    return FGameplayTagQuery{};
}

FGameplayTagQuery AFortGameStateAthena::GetOverridenDamageSelfTargetQuery(const APawn* Pawn) const {
    return FGameplayTagQuery{};
}

bool AFortGameStateAthena::GetOverridenDamageSelfRequiresNonZeroDamage(const APawn* Pawn) const {
    return false;
}

float AFortGameStateAthena::GetOverridenDamageSelfDamageToDeal(const APawn* Pawn) const {
    return 0.0f;
}

float AFortGameStateAthena::GetOverriddenVehicleTrickScore(const AFortPlayerController* Controller, float InTrickScore) {
    return 0.0f;
}

AFortGameplayMutator* AFortGameStateAthena::GetMutatorByInterface_Implementation(const AActor* ContextActor, UClass* MutatorInterface) {
    return NULL;
}

AFortGameplayMutator* AFortGameStateAthena::GetMutatorByClass_Implementation(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass) {
    return NULL;
}

int32 AFortGameStateAthena::GetMaxPlaylistPlayers() const {
    return 0;
}

float AFortGameStateAthena::GetEndGameReturnToMatchmakingOriginDelay() const {
    return 0.0f;
}

int32 AFortGameStateAthena::GetDamageComboHUDMinHits() const {
    return 0;
}

FName AFortGameStateAthena::GetCurrentPlaylistName() {
    return NAME_None;
}

UAthenaBattleBusItemDefinition* AFortGameStateAthena::GetBattleBusForPlayer(AFortPlayerControllerAthena* PC) const {
    return NULL;
}

int32 AFortGameStateAthena::GetAvgPlayerMMR() const {
    return 0;
}

FGameplayTagContainer AFortGameStateAthena::GetAthenaPlaylistContextTags() const {
    return FGameplayTagContainer{};
}

AFortAthenaAircraft* AFortGameStateAthena::GetAircraft(int32 AircraftIndex) const {
    return NULL;
}

void AFortGameStateAthena::DoesPlayerHaveLimitedLives(AFortPlayerState* PlayerState, bool& bPlayerLivesAreLimited, int32& RespawnsRemaining) const {
}

bool AFortGameStateAthena::CanUseSlowMotionOnVictory() {
    return false;
}

FEvaluationResult AFortGameStateAthena::CanSpawnActorOfClass(const AActor* InstigatorActor, UClass* ActorClassToSpawn, const FVector& Location, const FRotator& Rotation) const {
    return FEvaluationResult{};
}

FEvaluationResult AFortGameStateAthena::CanSpawnActor(const AActor* InstigatorActor, AActor* ActorToSpawn, const FVector& Location, const FRotator& Rotation) const {
    return FEvaluationResult{};
}

bool AFortGameStateAthena::CanRespawnOnStarterIsland() const {
    return false;
}

bool AFortGameStateAthena::CanChangeGameplayOptions() {
    return false;
}

bool AFortGameStateAthena::AreSkyTubesEnabled() const {
    return false;
}

void AFortGameStateAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateAthena, ReplicatedAdditionalGameFeaturePluginURLs);
    DOREPLIFETIME(AFortGameStateAthena, PlaylistEndTime);
    DOREPLIFETIME(AFortGameStateAthena, SafeZonePauseTime);
    DOREPLIFETIME(AFortGameStateAthena, TotalFinalCountdownTime);
    DOREPLIFETIME(AFortGameStateAthena, bPlaylistStoppedSafeZonePhases);
    DOREPLIFETIME(AFortGameStateAthena, bSkyTubesShuttingDown);
    DOREPLIFETIME(AFortGameStateAthena, bSkyTubesDisabled);
    DOREPLIFETIME(AFortGameStateAthena, ServerChangelistNumber);
    DOREPLIFETIME(AFortGameStateAthena, SpecialActorData);
    DOREPLIFETIME(AFortGameStateAthena, ReplOverrideData);
    DOREPLIFETIME(AFortGameStateAthena, bIsInCountdown);
    DOREPLIFETIME(AFortGameStateAthena, bIsInFinalCountdown);
    DOREPLIFETIME(AFortGameStateAthena, WarmupCountdownStartTime);
    DOREPLIFETIME(AFortGameStateAthena, WarmupCountdownEndTime);
    DOREPLIFETIME(AFortGameStateAthena, AircraftStartTime);
    DOREPLIFETIME(AFortGameStateAthena, SafeZonesStartTime);
    DOREPLIFETIME(AFortGameStateAthena, EndGameStartTime);
    DOREPLIFETIME(AFortGameStateAthena, EndGameKickPlayerTime);
    DOREPLIFETIME(AFortGameStateAthena, TotalPlayers);
    DOREPLIFETIME(AFortGameStateAthena, PlayersLeft);
    DOREPLIFETIME(AFortGameStateAthena, ClientVehicleClassesToLoad);
    DOREPLIFETIME(AFortGameStateAthena, ClientItemDefsToLoad);
    DOREPLIFETIME(AFortGameStateAthena, FocalPointActor);
    DOREPLIFETIME(AFortGameStateAthena, FocalPointOffset);
    DOREPLIFETIME(AFortGameStateAthena, FocalPointFOV);
    DOREPLIFETIME(AFortGameStateAthena, bCheatRespawnEnabled);
    DOREPLIFETIME(AFortGameStateAthena, StormCapState);
    DOREPLIFETIME(AFortGameStateAthena, DamageForStormCapMarking);
    DOREPLIFETIME(AFortGameStateAthena, TeamXPlayersLeft);
    DOREPLIFETIME(AFortGameStateAthena, WinningPlayerList);
    DOREPLIFETIME(AFortGameStateAthena, TeamsLeft);
    DOREPLIFETIME(AFortGameStateAthena, WinningTeamsCN);
    DOREPLIFETIME(AFortGameStateAthena, ServerToClientPreloadList);
    DOREPLIFETIME(AFortGameStateAthena, DefaultBattleBus);
    DOREPLIFETIME(AFortGameStateAthena, bAllowUserPickedCosmeticBattleBus);
    DOREPLIFETIME(AFortGameStateAthena, TeamFlightPaths);
    DOREPLIFETIME(AFortGameStateAthena, FlightPathMidLine);
    DOREPLIFETIME(AFortGameStateAthena, UtcTimeStartedMatch);
    DOREPLIFETIME(AFortGameStateAthena, bIsLargeTeamGame);
    DOREPLIFETIME(AFortGameStateAthena, WinningPlayerState);
    DOREPLIFETIME(AFortGameStateAthena, WinningTeam);
    DOREPLIFETIME(AFortGameStateAthena, WinningScore);
    DOREPLIFETIME(AFortGameStateAthena, CurrentHighScore);
    DOREPLIFETIME(AFortGameStateAthena, CurrentHighScoreTeam);
    DOREPLIFETIME(AFortGameStateAthena, SupplyDropWaveStartedSoundCue);
    DOREPLIFETIME(AFortGameStateAthena, AirCraftBehavior);
    DOREPLIFETIME(AFortGameStateAthena, bStormReachedFinalPosition);
    DOREPLIFETIME(AFortGameStateAthena, FriendlyFireType);
    DOREPLIFETIME(AFortGameStateAthena, SpectateAPartyMemberAvailable);
    DOREPLIFETIME(AFortGameStateAthena, GameMemberInfoArray);
    DOREPLIFETIME(AFortGameStateAthena, ActiveTeamNums);
    DOREPLIFETIME(AFortGameStateAthena, CurrentPlaylistId);
    DOREPLIFETIME(AFortGameStateAthena, SafeZoneIndicator);
    DOREPLIFETIME(AFortGameStateAthena, MapInfo);
    DOREPLIFETIME(AFortGameStateAthena, BroadcastSpectatorInfo);
    DOREPLIFETIME(AFortGameStateAthena, AICharacterPartsPreloadData);
    DOREPLIFETIME(AFortGameStateAthena, AIPawnCustomizationPreloadData);
    DOREPLIFETIME(AFortGameStateAthena, GamePhase);
    DOREPLIFETIME(AFortGameStateAthena, ReasonWereInSetupPhase);
    DOREPLIFETIME(AFortGameStateAthena, EventTournamentRound);
    DOREPLIFETIME(AFortGameStateAthena, bIsCustomMatch);
    DOREPLIFETIME(AFortGameStateAthena, CurrentPlaylistInfo);
    DOREPLIFETIME(AFortGameStateAthena, bGameModeWillSkipAircraft);
    DOREPLIFETIME(AFortGameStateAthena, SafeZonePhase);
    DOREPLIFETIME(AFortGameStateAthena, TotalPlayersBots);
    DOREPLIFETIME(AFortGameStateAthena, PlayerBotsLeft);
    DOREPLIFETIME(AFortGameStateAthena, Aircrafts);
    DOREPLIFETIME(AFortGameStateAthena, bAircraftIsLocked);
    DOREPLIFETIME(AFortGameStateAthena, CachedSafeZoneStartUp);
    DOREPLIFETIME(AFortGameStateAthena, LobbyAction);
    DOREPLIFETIME(AFortGameStateAthena, MutatorEventData);
    DOREPLIFETIME(AFortGameStateAthena, MutatorObjectDataArray);
    DOREPLIFETIME(AFortGameStateAthena, MutatorGenericInt_0);
    DOREPLIFETIME(AFortGameStateAthena, MutatorGenericInt_1);
    DOREPLIFETIME(AFortGameStateAthena, MutatorGenericInt_2);
    DOREPLIFETIME(AFortGameStateAthena, DefaultGliderRedeployCanRedeploy);
    DOREPLIFETIME(AFortGameStateAthena, DefaultRedeployGliderLateralVelocityMult);
    DOREPLIFETIME(AFortGameStateAthena, DefaultRedeployGliderHeightLimit);
    DOREPLIFETIME(AFortGameStateAthena, DefaultParachuteDeployTraceForGroundDistance);
    DOREPLIFETIME(AFortGameStateAthena, DefaultAllowNeutralWallEditing);
    DOREPLIFETIME(AFortGameStateAthena, DefaultRebootMachineHotfix);
    DOREPLIFETIME(AFortGameStateAthena, SignalInStormRegenSpeed);
    DOREPLIFETIME(AFortGameStateAthena, SignalInStormLostSpeed);
    DOREPLIFETIME(AFortGameStateAthena, StormCNDamageVulnerabilityLevel0);
    DOREPLIFETIME(AFortGameStateAthena, StormCNDamageVulnerabilityLevel1);
    DOREPLIFETIME(AFortGameStateAthena, StormCNDamageVulnerabilityLevel2);
    DOREPLIFETIME(AFortGameStateAthena, StormCNDamageVulnerabilityLevel3);
    DOREPLIFETIME(AFortGameStateAthena, bFishingCollectionEnabled);
    DOREPLIFETIME(AFortGameStateAthena, MeshNetworkStatus);
    DOREPLIFETIME(AFortGameStateAthena, VolumeManager);
    DOREPLIFETIME(AFortGameStateAthena, LocalizationService);
    DOREPLIFETIME(AFortGameStateAthena, SpawnMachineRepData);
    DOREPLIFETIME(AFortGameStateAthena, GoldenPoiLocationTags);
    DOREPLIFETIME(AFortGameStateAthena, CosmeticUsageReport);
    DOREPLIFETIME(AFortGameStateAthena, bEnvironmentDamageBlocked);
    DOREPLIFETIME(AFortGameStateAthena, ReticulatedSplineDefinitions);
    DOREPLIFETIME(AFortGameStateAthena, ReticulatedSplineIds);
    DOREPLIFETIME(AFortGameStateAthena, bDamageComboHUDEnabled);
    DOREPLIFETIME(AFortGameStateAthena, DamageComboHUDMinHits);
}

AFortGameStateAthena::AFortGameStateAthena() {
    bCanBuildOnWaterGlobal = true;
    bBlockBuildOnWaterGlobal = false;
    bPlaylistDataIsLoaded = false;
    bPlaylistDataIsActivelyLoading = false;
    PlaylistEndTime = 1;
    SafeZonePauseTime = 1;
    TotalFinalCountdownTime = 0;
    bForceTeamScorePlacementOnDeath = false;
    bPlaylistStoppedSafeZonePhases = false;
    bSkyTubesShuttingDown = false;
    bSkyTubesDisabled = false;
    ServerChangelistNumber = 0;
    SpecialActorData = NULL;
    ReplOverrideData = NULL;
    bSkipWinnerAnnounced = false;
    bStopBuildingHealingOnDamage = false;
    bIsInCountdown = false;
    bIsInFinalCountdown = false;
    WarmupCountdownStartTime = 1;
    WarmupCountdownEndTime = 1;
    AircraftStartTime = 1;
    SafeZonesStartTime = 1;
    EndGameStartTime = 1;
    EndGameKickPlayerTime = 1;
    TotalPlayers = 0;
    PlayersLeft = 0;
    RemainingFocalPointActorDuration = 1;
    FocalPointActor = NULL;
    FocalPointFOV = 1;
    bCheatRespawnEnabled = true;
    StormCapState = EAthenaStormCapState::None;
    CurrentPlayerCap = 0;
    TeamsLeft = 0;
    DefaultBattleBus = NULL;
    bAllowUserPickedCosmeticBattleBus = false;
    bIsLargeTeamGame = false;
    WinningPlayerState = NULL;
    WinningTeam = 0;
    WinningScore = 0;
    CurrentHighScore = 0;
    CurrentHighScoreTeam = 0;
    SupplyDropWaveStartedSoundCue = NULL;
    AirCraftBehavior = EAirCraftBehavior::Default;
    bStormReachedFinalPosition = false;
    FriendlyFireType = EFriendlyFireType::Off;
    SpectateAPartyMemberAvailable = false;
    CurrentPlaylistId = 0;
    SafeZoneIndicator = NULL;
    MinimapBackgroundMID = NULL;
    MinimapCircleMID = NULL;
    MinimapNextCircleMID = NULL;
    FullmapCircleMID = NULL;
    FullmapNextCircleMID = NULL;
    MiniMapBackgroundDrawingMaterial = NULL;
    MiniMapCircleDrawingMaterial = NULL;
    MiniMapNextCircleDrawingMaterial = NULL;
    MapInfo = NULL;
    MinimapMPC = NULL;
    BroadcastSpectatorInfo = NULL;
    SplatterGridSystem = NULL;
    CustomizationsPreloader = NULL;
    GamePhase = EAthenaGamePhase::None;
    EventTournamentRound = EEventTournamentRound::Open;
    bIsCustomMatch = false;
    bGameModeWillSkipAircraft = false;
    SafeZonePhase = 0;
    GamePhaseStep = EAthenaGamePhaseStep::None;
    GamePhaseStepTimeRemaining = 1;
    LobbySoundMix = NULL;
    TotalPlayersBots = 0;
    PlayerBotsLeft = 0;
    bAircraftIsLocked = false;
    CachedSafeZoneStartUp = ESafeZoneStartUp::UseDefaultGameBehavior;
    LobbyAction = 0;
    MutatorGenericInt_0 = 0;
    MutatorGenericInt_1 = 0;
    MutatorGenericInt_2 = 0;
    GameplayMutator_AI = NULL;
    MutatorListComponent = CreateDefaultSubobject<UFortMutatorListComponent>(TEXT("MutatorList"));
    FortGameStateComponent_Telemetry = CreateDefaultSubobject<UFortGameStateComponent_Telemetry>(TEXT("TelemetryComponent"));
    ActiveEventManager = CreateDefaultSubobject<UFortGameStateComponent_ActiveEventManager>(TEXT("ActiveEventManager"));
    DefaultGliderRedeployCanRedeploy = 1;
    DefaultRedeployGliderLateralVelocityMult = 1;
    DefaultRedeployGliderHeightLimit = 1;
    DefaultParachuteDeployTraceForGroundDistance = 1;
    DefaultAllowNeutralWallEditing = 1;
    DefaultRebootMachineHotfix = 1;
    SignalInStormRegenSpeed = 1;
    SignalInStormLostSpeed = 1;
    StormCNDamageVulnerabilityLevel0 = 1;
    StormCNDamageVulnerabilityLevel1 = 1;
    StormCNDamageVulnerabilityLevel2 = 1;
    StormCNDamageVulnerabilityLevel3 = 1;
    bFishingCollectionEnabled = true;
    VolumeManagerToUse = NULL;
    VolumeManager = NULL;
    LocalizationService = NULL;
    EliminationMarkerHUDMaxDistance = 1;
    EliminationMarkerHUDZOffset = 1;
    UnicornDriver = NULL;
    SmoothedWorldTimeSeconds = 1;
    SmoothedWorldTimeSecondsDrift = 1;
    bEnvironmentDamageBlocked = false;
    bDamageComboHUDEnabled = true;
    DamageComboHUDMinHits = 0;
}

