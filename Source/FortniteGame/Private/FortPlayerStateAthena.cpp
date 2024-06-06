#include "FortPlayerStateAthena.h"
#include "Net/UnrealNetwork.h"

EDeathCause AFortPlayerStateAthena::ToDeathCause(const FGameplayTagContainer& InTags, bool bWasDBNO) {
    return EDeathCause::OutsideSafeZone;
}

void AFortPlayerStateAthena::Server_TogglePreserveSquad_Implementation() {
}
bool AFortPlayerStateAthena::Server_TogglePreserveSquad_Validate() {
    return true;
}

void AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Implementation(bool bCanEdit, const TArray<FString>& WhiteList) {
}
bool AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Validate(bool bCanEdit, const TArray<FString>& WhiteList) {
    return true;
}

void AFortPlayerStateAthena::OnRep_TotalPlayerScore() {
}

void AFortPlayerStateAthena::OnRep_ThankedBusDriver() {
}

void AFortPlayerStateAthena::OnRep_TeamScorePlacement() {
}

void AFortPlayerStateAthena::OnRep_TeamScore() {
}

void AFortPlayerStateAthena::OnRep_TeamKillScore() {
}

void AFortPlayerStateAthena::OnRep_TeamIndex(uint8 OldVal) {
}

void AFortPlayerStateAthena::OnRep_TeamAverageDamageDealt() {
}

void AFortPlayerStateAthena::OnRep_StormSurgeEffectCount() {
}

void AFortPlayerStateAthena::OnRep_SquadId() {
}

void AFortPlayerStateAthena::OnRep_SimpleMetricInformation() {
}

void AFortPlayerStateAthena::OnRep_SeasonLevelUIDisplay() {
}

void AFortPlayerStateAthena::OnRep_ResurrectionChipReplicated() {
}

void AFortPlayerStateAthena::OnRep_ResurrectingNow(const bool bPreviousResurrectingNow) {
}

void AFortPlayerStateAthena::OnRep_ReplicatedTeamMemberState() {
}

void AFortPlayerStateAthena::OnRep_RebootCounter() {
}

void AFortPlayerStateAthena::OnRep_PreserveSquad() {
}

void AFortPlayerStateAthena::OnRep_Place() {
}

void AFortPlayerStateAthena::OnRep_NumSupplyDropsOpened() {
}

void AFortPlayerStateAthena::OnRep_NumSilverCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumMinutesAlive() {
}

void AFortPlayerStateAthena::OnRep_NumLlamasOpened() {
}

void AFortPlayerStateAthena::OnRep_NumGoldCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumForagedItemsConsumed() {
}

void AFortPlayerStateAthena::OnRep_NumChestsOpened() {
}

void AFortPlayerStateAthena::OnRep_NumBronzeCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumAmmoCansOpened() {
}

void AFortPlayerStateAthena::OnRep_MetricInformation() {
}

void AFortPlayerStateAthena::OnRep_MatchAbandonState(const EMatchAbandonState PrevMatchAbandonState) {
}

void AFortPlayerStateAthena::OnRep_Kills() {
}

void AFortPlayerStateAthena::OnRep_Downs() {
}

void AFortPlayerStateAthena::OnRep_DidNotThankBusDriver() {
}

void AFortPlayerStateAthena::OnRep_DeathInfo() {
}

void AFortPlayerStateAthena::OnRep_ChangeTeamInfo() {
}

void AFortPlayerStateAthena::OnRep_AIKills() {
}

bool AFortPlayerStateAthena::IsSquadDead() const {
    return false;
}

bool AFortPlayerStateAthena::IsResurrectionChipAvailable() const {
    return false;
}

bool AFortPlayerStateAthena::IsResurrectingNow() const {
    return false;
}

bool AFortPlayerStateAthena::IsInSquad() const {
    return false;
}

bool AFortPlayerStateAthena::IsDisconnected() const {
    return false;
}

float AFortPlayerStateAthena::GetRemainingResurrectionChipExpirationTime() const {
    return 0.0f;
}

FLinearColor AFortPlayerStateAthena::GetPinColor() const {
    return FLinearColor{};
}

FDeathInfo AFortPlayerStateAthena::GetDeathInfo() const {
    return FDeathInfo{};
}

void AFortPlayerStateAthena::ClientReportTeamKill_Implementation(int32 TeamKills) {
}

void AFortPlayerStateAthena::ClientReportKill_Implementation(const AFortPlayerStateAthena* Player) {
}

void AFortPlayerStateAthena::ClientReportDBNO_Implementation(const AFortPlayerStateAthena* Player) {
}

void AFortPlayerStateAthena::ClientNotifyMatchEntered_Implementation(const FEventTournamentIds& EventIds) {
}

void AFortPlayerStateAthena::ClientAddKillFeedErrorMessage_Implementation(const TArray<FFortCreativeMessageDispatcherErrorMessage>& ErrorMessages) {
}

void AFortPlayerStateAthena::Client_OnNewLevel_Implementation(int32 NewLevel) {
}

bool AFortPlayerStateAthena::CanEditCreativeIsland() const {
    return false;
}

bool AFortPlayerStateAthena::CanBeResurrected() const {
    return false;
}

void AFortPlayerStateAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStateAthena, PersonalLobbyAction);
    DOREPLIFETIME(AFortPlayerStateAthena, ReplicatedTeamMemberState);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamKillScore);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamIndex);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamScorePlacement);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamScore);
    DOREPLIFETIME(AFortPlayerStateAthena, Place);
    DOREPLIFETIME(AFortPlayerStateAthena, DownScore);
    DOREPLIFETIME(AFortPlayerStateAthena, KillScore);
    DOREPLIFETIME(AFortPlayerStateAthena, SeasonLevelUIDisplay);
    DOREPLIFETIME(AFortPlayerStateAthena, NumChestsOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumAmmoCansOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumSupplyDropsOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumLlamasOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumForagedItemsConsumed);
    DOREPLIFETIME(AFortPlayerStateAthena, NumMinutesAlive);
    DOREPLIFETIME(AFortPlayerStateAthena, NumBronzeCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, NumSilverCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, NumGoldCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, TotalPlayerScore);
    DOREPLIFETIME(AFortPlayerStateAthena, StormSurgeEffectCount);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamAverageDamageDealt);
    DOREPLIFETIME(AFortPlayerStateAthena, SquadId);
    DOREPLIFETIME(AFortPlayerStateAthena, bThankedBusDriver);
    DOREPLIFETIME(AFortPlayerStateAthena, bDidNotThankBusDriver);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousMode);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousCharacterMode);
    DOREPLIFETIME(AFortPlayerStateAthena, PlayerNameCustomOverride);
    DOREPLIFETIME(AFortPlayerStateAthena, MetricInformation);
    DOREPLIFETIME(AFortPlayerStateAthena, SimpleMetricInformation);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsDisconnected);
    DOREPLIFETIME(AFortPlayerStateAthena, DeathInfo);
    DOREPLIFETIME(AFortPlayerStateAthena, ChangeTeamInfo);
    DOREPLIFETIME(AFortPlayerStateAthena, ResurrectionChipAvailable);
    DOREPLIFETIME(AFortPlayerStateAthena, bResurrectingNow);
    DOREPLIFETIME(AFortPlayerStateAthena, RebootCounter);
    DOREPLIFETIME(AFortPlayerStateAthena, bHoldsRebootVanLock);
    DOREPLIFETIME(AFortPlayerStateAthena, MatchAbandonState);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsAnAthenaGameParticipant);
    DOREPLIFETIME(AFortPlayerStateAthena, BotUniqueId);
    DOREPLIFETIME(AFortPlayerStateAthena, bPreserveSquad);
}

AFortPlayerStateAthena::AFortPlayerStateAthena() {
    PersonalLobbyAction = 0;
    ReplicatedTeamMemberState = ETeamMemberState::None;
    TeamMemberState = ETeamMemberState::None;
    TeamMemberStateRepTime = 1;
    bHasWonAGame = false;
    TeamKillScore = 0;
    TeamIndex = 0;
    TeamScorePlacement = 0;
    TeamScore = 0;
    Place = 0;
    DownScore = 0;
    KillScore = 0;
    SeasonLevelUIDisplay = 0;
    HumanKillScore = 0;
    AIKillCount = 0;
    NumChestsOpened = 0;
    NumAmmoCansOpened = 0;
    NumSupplyDropsOpened = 0;
    NumLlamasOpened = 0;
    NumForagedItemsConsumed = 0;
    NumMinutesAlive = 0;
    NumBronzeCoinsCollected = 0;
    NumSilverCoinsCollected = 0;
    NumGoldCoinsCollected = 0;
    TotalPlayerScore = 0;
    StormSurgeEffectCount = 0;
    TeamAverageDamageDealt = 0;
    SquadId = 0;
    bThankedBusDriver = false;
    bDidNotThankBusDriver = false;
    bUsingAnonymousMode = false;
    bUsingAnonymousCharacterMode = false;
    bIsTalking = false;
    bIsMuted = false;
    SecondsAlive = 0;
    TimeOfPawnCreation = 0;
    bIsDisconnected = false;
    GameModeIcon = NULL;
    bResurrectionChipDisabled = false;
    bResurrectingNow = false;
    RebootCounter = 0;
    bHoldsRebootVanLock = false;
    MatchAbandonState = EMatchAbandonState::None;
    bIsAnAthenaGameParticipant = true;
    bPreserveSquad = false;
}

