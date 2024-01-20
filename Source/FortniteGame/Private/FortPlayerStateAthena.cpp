#include "FortPlayerStateAthena.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerStateAthena::UpdateMatchReportFromDeathInfoForPlayer() {
}

EDeathCause AFortPlayerStateAthena::ToDeathCause(const FGameplayTagContainer& InTags, bool bWasDBNO) {
    return EDeathCause::OutsideSafeZone;
}

void AFortPlayerStateAthena::ServerSetInAircraft_Implementation(bool bNewInAircraft) {
}
bool AFortPlayerStateAthena::ServerSetInAircraft_Validate(bool bNewInAircraft) {
    return true;
}

void AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Implementation(bool bCanEdit, const TArray<FString>& WhiteList) {
}
bool AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Validate(bool bCanEdit, const TArray<FString>& WhiteList) {
    return true;
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

void AFortPlayerStateAthena::OnRep_ResurrectionChipReplicated() {
}

void AFortPlayerStateAthena::OnRep_ResurrectingNow(const bool bPreviousResurrectingNow) {
}

void AFortPlayerStateAthena::OnRep_ReplicatedTeamMemberState() {
}

void AFortPlayerStateAthena::OnRep_RebootCounter() {
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

void AFortPlayerStateAthena::OnRep_Kills() {
}

void AFortPlayerStateAthena::OnRep_Downs() {
}

void AFortPlayerStateAthena::OnRep_DeathInfo() {
}

void AFortPlayerStateAthena::OnRep_BannerInfo() {
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

void AFortPlayerStateAthena::ClientNotifyMatchEntered_Implementation(const FString& EventIds) {
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
    DOREPLIFETIME(AFortPlayerStateAthena, Banner);
    DOREPLIFETIME(AFortPlayerStateAthena, bThankedBusDriver);
    DOREPLIFETIME(AFortPlayerStateAthena, bInAircraft);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousMode);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousCharacterMode);
    DOREPLIFETIME(AFortPlayerStateAthena, StreamerModeName);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsDisconnected);
    DOREPLIFETIME(AFortPlayerStateAthena, DeathInfo);
    DOREPLIFETIME(AFortPlayerStateAthena, ResurrectionChipAvailable);
    DOREPLIFETIME(AFortPlayerStateAthena, bResurrectingNow);
    DOREPLIFETIME(AFortPlayerStateAthena, RebootCounter);
    DOREPLIFETIME(AFortPlayerStateAthena, bHoldsRebootVanLock);
}

AFortPlayerStateAthena::AFortPlayerStateAthena() {
    this->PersonalLobbyAction = 0;
    this->ReplicatedTeamMemberState = ETeamMemberState::None;
    this->TeamMemberState = ETeamMemberState::None;
    this->TeamMemberStateRepTime = 0.00f;
    this->bHasWonAGame = false;
    this->TeamKillScore = 0;
    this->TeamIndex = 0;
    this->TeamScorePlacement = 0;
    this->TeamScore = -1;
    this->Place = 0;
    this->DownScore = 0;
    this->KillScore = 0;
    this->AIKillCount = 0;
    this->NumChestsOpened = 0;
    this->NumAmmoCansOpened = 0;
    this->NumSupplyDropsOpened = 0;
    this->NumLlamasOpened = 0;
    this->NumForagedItemsConsumed = 0;
    this->NumMinutesAlive = 0;
    this->NumBronzeCoinsCollected = 0;
    this->NumSilverCoinsCollected = 0;
    this->NumGoldCoinsCollected = 0;
    this->TotalPlayerScore = 0;
    this->StormSurgeEffectCount = 0;
    this->TeamAverageDamageDealt = 0;
    this->SquadId = 0;
    this->bThankedBusDriver = false;
    this->bInAircraft = false;
    this->bUsingAnonymousMode = false;
    this->bUsingAnonymousCharacterMode = false;
    this->bIsTalking = false;
    this->bIsMuted = false;
    this->PartyAssistQuestTemplate = NULL;
    this->SecondsAlive = 0;
    this->TimeOfPawnCreation = 0;
    this->bIsDisconnected = false;
    this->GameModeIcon = NULL;
    this->bResurrectingNow = false;
    this->RebootCounter = 0;
    this->bHoldsRebootVanLock = false;
}

