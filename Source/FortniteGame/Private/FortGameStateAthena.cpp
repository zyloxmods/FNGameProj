#include "FortGameStateAthena.h"
#include "FortMutatorListComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortGameStateAthena::UpdateAllGoldenPoiColor(FLinearColor Color, const FSlateFontInfo& Font) {
}

void AFortGameStateAthena::SetLocationText(const FGameplayTag& LocationTag, const FText& Text) {
}

void AFortGameStateAthena::SetLocationPosition2D(const FGameplayTag& LocationTag, FVector2D Location) {
}

void AFortGameStateAthena::SetLocationFont(const FGameplayTag& LocationTag, const FSlateFontInfo& Font) {
}

void AFortGameStateAthena::SetLocationColor(const FGameplayTag& LocationTag, FLinearColor Color) {
}

void AFortGameStateAthena::SetFloatingIslandInformation(FVector WorldPosition, bool bActivated) {
}

void AFortGameStateAthena::RunPerfMemCheatScript_Client_Replicated_Implementation(bool bStartStatFiles) {
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

void AFortGameStateAthena::OnRep_SkyTubesDisabled() {
}

void AFortGameStateAthena::OnRep_ServerChangelistNumber() {
}

void AFortGameStateAthena::OnRep_SafeZonePhase() {
}

void AFortGameStateAthena::OnRep_PlaylistTimeRemaining() {
}

void AFortGameStateAthena::OnRep_PlayersLeft() {
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

void AFortGameStateAthena::OnRep_GoldenPoiLocationTags() {
}

void AFortGameStateAthena::OnRep_GamePhase(EAthenaGamePhase OldGamePhase) {
}

void AFortGameStateAthena::OnRep_EventTournamentRound() {
}

void AFortGameStateAthena::OnRep_DamageForStormCapMarking() {
}

void AFortGameStateAthena::OnRep_CurrentPlaylistInfo() {
}

void AFortGameStateAthena::OnRep_CurrentPlaylistId() {
}

void AFortGameStateAthena::OnRep_CurrentHighScore() {
}

void AFortGameStateAthena::OnRep_BroadcastSpectatorInfo() {
}

void AFortGameStateAthena::OnRep_bPlaylistStoppedSafeZonePhases() {
}

void AFortGameStateAthena::OnRep_Aircraft() {
}

bool AFortGameStateAthena::IsTeleportToCreativeHubAllowed() {
    return false;
}

bool AFortGameStateAthena::IsTeamSwitchAllowed(const APawn* SwitchingPawn) const {
    return false;
}

bool AFortGameStateAthena::IsResurrectionEnabled(AFortPlayerPawn* PlayerPawn) const {
    return false;
}

bool AFortGameStateAthena::IsPlaygroundModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsPlayerTriggeredRespawnAllowed(const AFortPlayerState* PlayerState) {
    return false;
}

bool AFortGameStateAthena::IsGamePhaseNotificationSkipped(EAthenaGamePhaseStep GamePhaseToSkip) const {
    return false;
}

bool AFortGameStateAthena::IsCreativeOrPlaygroundModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeModePlaylist() const {
    return false;
}

bool AFortGameStateAthena::IsCreativeLTMPlaylist() const {
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

float AFortGameStateAthena::GetOverriddenVehicleTrickScore(const AFortPlayerController* Controller, float InTrickScore) {
    return 0.0f;
}

AFortGameplayMutator* AFortGameStateAthena::GetMutatorByClass_Implementation(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass) {
    return NULL;
}

int32 AFortGameStateAthena::GetMaxPlaylistPlayers() const {
    return 0;
}

FName AFortGameStateAthena::GetCurrentPlaylistName() {
    return NAME_None;
}

UAthenaBattleBusItemDefinition* AFortGameStateAthena::GetBattleBusForPlayer(AFortPlayerControllerAthena* PC) const {
    return NULL;
}

FGameplayTagContainer AFortGameStateAthena::GetAthenaPlaylistContextTags() const {
    return FGameplayTagContainer{};
}

AFortAthenaAircraft* AFortGameStateAthena::GetAircraft(int32 AircraftIndex) const {
    return NULL;
}

EAthenaAerialPhase AFortGameStateAthena::GetAerialPhase(AFortPlayerControllerAthena* PlayerController) const {
    return EAthenaAerialPhase::None;
}

bool AFortGameStateAthena::CanUseSlowMotionOnVictory() {
    return false;
}

bool AFortGameStateAthena::CanRespawnOnStarterIsland() const {
    return false;
}

bool AFortGameStateAthena::CanChangeGameplayOptions() {
    return false;
}

void AFortGameStateAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateAthena, PlaylistTimeRemaining);
    DOREPLIFETIME(AFortGameStateAthena, TotalFinalCountdownTime);
    DOREPLIFETIME(AFortGameStateAthena, bPlaylistStoppedSafeZonePhases);
    DOREPLIFETIME(AFortGameStateAthena, bSafeZonePaused);
    DOREPLIFETIME(AFortGameStateAthena, bSkyTubesDisabled);
    DOREPLIFETIME(AFortGameStateAthena, ServerChangelistNumber);
    DOREPLIFETIME(AFortGameStateAthena, SpecialActorData);
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
    DOREPLIFETIME(AFortGameStateAthena, TreasureChestInfos);
    DOREPLIFETIME(AFortGameStateAthena, AmmoBoxInfos);
    DOREPLIFETIME(AFortGameStateAthena, bCheatRespawnEnabled);
    DOREPLIFETIME(AFortGameStateAthena, StormCapState);
    DOREPLIFETIME(AFortGameStateAthena, DamageForStormCapMarking);
    DOREPLIFETIME(AFortGameStateAthena, TeamXPlayersLeft);
    DOREPLIFETIME(AFortGameStateAthena, WinningPlayerList);
    DOREPLIFETIME(AFortGameStateAthena, TeamsLeft);
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
    DOREPLIFETIME(AFortGameStateAthena, GameMemberInfoArray);
    DOREPLIFETIME(AFortGameStateAthena, ActiveTeamNums);
    DOREPLIFETIME(AFortGameStateAthena, CurrentPlaylistId);
    DOREPLIFETIME(AFortGameStateAthena, SafeZoneIndicator);
    DOREPLIFETIME(AFortGameStateAthena, MapInfo);
    DOREPLIFETIME(AFortGameStateAthena, BroadcastSpectatorInfo);
    DOREPLIFETIME(AFortGameStateAthena, GamePhase);
    DOREPLIFETIME(AFortGameStateAthena, EventTournamentRound);
    DOREPLIFETIME(AFortGameStateAthena, CurrentPlaylistInfo);
    DOREPLIFETIME(AFortGameStateAthena, bGameModeWillSkipAircraft);
    DOREPLIFETIME(AFortGameStateAthena, SafeZonePhase);
    DOREPLIFETIME(AFortGameStateAthena, PlayerBotsLeft);
    DOREPLIFETIME(AFortGameStateAthena, TeamBotsLeft);
    DOREPLIFETIME(AFortGameStateAthena, Aircrafts);
    DOREPLIFETIME(AFortGameStateAthena, bAircraftIsLocked);
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
    DOREPLIFETIME(AFortGameStateAthena, MeshNetworkStatus);
    DOREPLIFETIME(AFortGameStateAthena, VolumeManager);
    DOREPLIFETIME(AFortGameStateAthena, SpawnMachineRepData);
    DOREPLIFETIME(AFortGameStateAthena, GoldenPoiLocationTags);
}

AFortGameStateAthena::AFortGameStateAthena() {
    this->bPlaylistDataIsLoaded = false;
    this->bPlaylistDataIsActivelyLoading = false;
    this->PlaylistTimeRemaining = 0;
    this->PrevPlaylistTimeRemaining = 0;
    this->TotalFinalCountdownTime = 0;
    this->bForceTeamScorePlacementOnDeath = false;
    this->bPlaylistStoppedSafeZonePhases = false;
    this->bSafeZonePaused = false;
    this->bSkyTubesDisabled = false;
    this->ServerChangelistNumber = 0;
    this->SpecialActorData = NULL;
    this->bSkipWinnerAnnounced = false;
    this->bIsInCountdown = false;
    this->bIsInFinalCountdown = false;
    this->WarmupCountdownStartTime = -1.00f;
    this->WarmupCountdownEndTime = -1.00f;
    this->AircraftStartTime = -1.00f;
    this->SafeZonesStartTime = -1.00f;
    this->EndGameStartTime = -1.00f;
    this->EndGameKickPlayerTime = -1.00f;
    this->TotalPlayers = 0;
    this->PlayersLeft = 0;
    this->bCheatRespawnEnabled = true;
    this->StormCapState = EAthenaStormCapState::None;
    this->CurrentPlayerCap = 0;
    this->DamageForStormCapMarking = 0.00f;
    this->TeamsLeft = 0;
    this->DefaultBattleBus = NULL;
    this->bAllowUserPickedCosmeticBattleBus = false;
    this->bIsLargeTeamGame = false;
    this->WinningPlayerState = NULL;
    this->WinningTeam = 0;
    this->WinningScore = -1;
    this->CurrentHighScore = 0;
    this->CurrentHighScoreTeam = 0;
    this->SupplyDropWaveStartedSoundCue = NULL;
    this->AirCraftBehavior = EAirCraftBehavior::Default;
    this->bStormReachedFinalPosition = false;
    this->FriendlyFireType = EFriendlyFireType::Off;
    this->CurrentPlaylistId = 0;
    this->SafeZoneIndicator = NULL;
    this->MinimapMaterial = NULL;
    this->MinimapBackgroundMID = NULL;
    this->MinimapCircleMID = NULL;
    this->MinimapNextCircleMID = NULL;
    this->FullmapCircleMID = NULL;
    this->FullmapNextCircleMID = NULL;
    this->MiniMapBackgroundDrawingMaterial = NULL;
    this->MiniMapCircleDrawingMaterial = NULL;
    this->MiniMapNextCircleDrawingMaterial = NULL;
    this->MapInfo = NULL;
    this->MinimapMPC = NULL;
    this->BroadcastSpectatorInfo = NULL;
    this->GamePhase = EAthenaGamePhase::Setup;
    this->EventTournamentRound = EEventTournamentRound::Unknown;
    this->bGameModeWillSkipAircraft = false;
    this->SafeZonePhase = 0;
    this->GamePhaseStep = EAthenaGamePhaseStep::None;
    this->GamePhaseStepTimeRemaining = 0.00f;
    this->LobbySoundMix = NULL;
    this->PlayerBotsLeft = 0;
    this->TeamBotsLeft = 0;
    this->bAircraftIsLocked = false;
    this->CachedSafeZoneStartUp = ESafeZoneStartUp::UseDefaultGameBehavior;
    this->LobbyAction = 0;
    this->MutatorGenericInt_0 = 0;
    this->MutatorGenericInt_1 = 0;
    this->MutatorGenericInt_2 = 0;
    this->GameplayMutator_AI = NULL;
    this->MutatorListComponent = CreateDefaultSubobject<UFortMutatorListComponent>(TEXT("MutatorList"));
    this->DefaultGliderRedeployCanRedeploy = 0.00f;
    this->DefaultRedeployGliderLateralVelocityMult = 0.00f;
    this->DefaultRedeployGliderHeightLimit = 0.00f;
    this->DefaultParachuteDeployTraceForGroundDistance = 0.00f;
    this->DefaultAllowNeutralWallEditing = 0.00f;
    this->DefaultRebootMachineHotfix = 0.00f;
    this->VolumeManagerToUse = NULL;
    this->VolumeManager = NULL;
}

