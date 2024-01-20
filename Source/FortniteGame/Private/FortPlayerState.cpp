#include "FortPlayerState.h"
#include "CustomPlayerComponent.h"
#include "FortAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerState::UpdateScoreStatChanged() {
}

void AFortPlayerState::ServerSetShowHeroHeadAccessories_Implementation(bool bShow) {
}
bool AFortPlayerState::ServerSetShowHeroHeadAccessories_Validate(bool bShow) {
    return true;
}

void AFortPlayerState::ServerSetShowHeroBackpack_Implementation(bool bShow) {
}
bool AFortPlayerState::ServerSetShowHeroBackpack_Validate(bool bShow) {
    return true;
}

void AFortPlayerState::OnRep_ShowHeroHeadAccessories() {
}

void AFortPlayerState::OnRep_ShowHeroBackpack() {
}

void AFortPlayerState::OnRep_SessionOwner() {
}

void AFortPlayerState::OnRep_ScoreStatChanged() {
}

void AFortPlayerState::OnRep_PlayerTeamPrivate() {
}

void AFortPlayerState::OnRep_PlayerTeam() {
}

void AFortPlayerState::OnRep_PlatformUniqueNetId() {
}

void AFortPlayerState::OnRep_Platform() {
}

void AFortPlayerState::OnRep_PartyOwner() {
}

void AFortPlayerState::OnRep_HomeActor(AActor* OldHomeActor) {
}

void AFortPlayerState::OnRep_HeroType() {
}

void AFortPlayerState::OnRep_HeroId() {
}

void AFortPlayerState::OnRep_CurrentCharXP() {
}

void AFortPlayerState::OnRep_CharacterParts() {
}

void AFortPlayerState::OnRep_CharacterGender() {
}

void AFortPlayerState::OnRep_CharacterColorSwatches() {
}

void AFortPlayerState::OnRep_CharacterBodyType() {
}

void AFortPlayerState::OnRep_bHasStartedPlaying() {
}

void AFortPlayerState::OnRep_AccessoryColorSwatches() {
}

bool AFortPlayerState::IsConsolePlayer() const {
    return false;
}

FUniqueNetIdRepl AFortPlayerState::GetUniqueID() const {
    return FUniqueNetIdRepl{};
}

FName AFortPlayerState::GetPlayerOSSName() const {
    return NAME_None;
}

FUniqueNetIdRepl AFortPlayerState::GetPlatformUniqueNetId() const {
    return FUniqueNetIdRepl{};
}

FString AFortPlayerState::GetPlatform() const {
    return TEXT("");
}

AFortPlayerPawn* AFortPlayerState::GetCurrentPawn() const {
    return NULL;
}

void AFortPlayerState::ClientNotifyAwardGranted_Implementation(UFortAwardItemDefinition* AwardDefinition) {
}

bool AFortPlayerState::AreUniqueIDsIdentical(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

void AFortPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerState, bIsWorldDataOwner);
    DOREPLIFETIME(AFortPlayerState, bIsGameSessionOwner);
    DOREPLIFETIME(AFortPlayerState, bIsGameSessionAdmin);
    DOREPLIFETIME(AFortPlayerState, bIsReadyToContinue);
    DOREPLIFETIME(AFortPlayerState, bHasFinishedLoading);
    DOREPLIFETIME(AFortPlayerState, bHasStartedPlaying);
    DOREPLIFETIME(AFortPlayerState, bShowHeroBackpack);
    DOREPLIFETIME(AFortPlayerState, bShowHeroHeadAccessories);
    DOREPLIFETIME(AFortPlayerState, bRepFlag1);
    DOREPLIFETIME(AFortPlayerState, PlayerRole);
    DOREPLIFETIME(AFortPlayerState, PartyOwnerUniqueId);
    DOREPLIFETIME(AFortPlayerState, WorldPlayerId);
    DOREPLIFETIME(AFortPlayerState, HeroId);
    DOREPLIFETIME(AFortPlayerState, HeroType);
    DOREPLIFETIME(AFortPlayerState, CurrentCharXP);
    DOREPLIFETIME(AFortPlayerState, MyBackpackPickup);
    DOREPLIFETIME(AFortPlayerState, InitialExperienceLevel);
    DOREPLIFETIME(AFortPlayerState, InitialExperienceAmount);
    DOREPLIFETIME(AFortPlayerState, ExperienceDeltas);
    DOREPLIFETIME(AFortPlayerState, Platform);
    DOREPLIFETIME(AFortPlayerState, CharacterGender);
    DOREPLIFETIME(AFortPlayerState, CharacterBodyType);
    DOREPLIFETIME(AFortPlayerState, CharacterParts);
    DOREPLIFETIME(AFortPlayerState, CharacterColorSwatches);
    DOREPLIFETIME(AFortPlayerState, CharacterPartColorSwatches);
    DOREPLIFETIME(AFortPlayerState, PlayerTeam);
    DOREPLIFETIME(AFortPlayerState, PlayerTeamPrivate);
    DOREPLIFETIME(AFortPlayerState, ReplicatedStats_Campaign);
    DOREPLIFETIME(AFortPlayerState, ReplicatedStats_Zone);
    DOREPLIFETIME(AFortPlayerState, bAreZoneStatsFinalized);
    DOREPLIFETIME(AFortPlayerState, ReadyCheckState);
    DOREPLIFETIME(AFortPlayerState, HomeActor);
    DOREPLIFETIME(AFortPlayerState, PlatformUniqueNetId);
}

AFortPlayerState::AFortPlayerState() {
    this->bIsWorldDataOwner = false;
    this->bIsGameSessionOwner = false;
    this->bIsGameSessionAdmin = false;
    this->bIsReadyToContinue = false;
    this->bHasFinishedLoading = false;
    this->bHasStartedPlaying = false;
    this->bShowHeroBackpack = true;
    this->bShowHeroHeadAccessories = true;
    this->bRepFlag1 = true;
    this->PlayerRole = EFortPlayerRole::Player;
    this->WorldPlayerId = -1;
    this->HeroType = NULL;
    this->CurrentCharXP = 0;
    this->InitialExperienceLevel = -1;
    this->InitialExperienceAmount = -1;
    this->CharacterGender = EFortCustomGender::Both;
    this->CharacterBodyType = EFortCustomBodyType::Small;
    this->CharacterColorSwatches[0] = NULL;
    this->CharacterColorSwatches[1] = NULL;
    this->LocalCharacterGender = EFortCustomGender::Both;
    this->LocalCharacterBodyType = EFortCustomBodyType::Small;
    this->LocalCharacterParts[0] = NULL;
    this->LocalCharacterParts[1] = NULL;
    this->LocalCharacterParts[2] = NULL;
    this->LocalCharacterParts[3] = NULL;
    this->LocalCharacterParts[4] = NULL;
    this->LocalCharacterParts[5] = NULL;
    this->LocalCharacterColorSwatches[0] = NULL;
    this->LocalCharacterColorSwatches[1] = NULL;
    this->CustomPRIComponent = CreateDefaultSubobject<UCustomPlayerComponent>(TEXT("CustomPRIComponent"));
    this->CharacterPartColorSwatches[0] = NULL;
    this->CharacterPartColorSwatches[1] = NULL;
    this->CharacterPartColorSwatches[2] = NULL;
    this->CharacterPartColorSwatches[3] = NULL;
    this->CharacterPartColorSwatches[4] = NULL;
    this->CharacterPartColorSwatches[5] = NULL;
    this->LocalCharacterPartColorSwatches[0] = NULL;
    this->LocalCharacterPartColorSwatches[1] = NULL;
    this->LocalCharacterPartColorSwatches[2] = NULL;
    this->LocalCharacterPartColorSwatches[3] = NULL;
    this->LocalCharacterPartColorSwatches[4] = NULL;
    this->LocalCharacterPartColorSwatches[5] = NULL;
    this->PlayerTeam = NULL;
    this->PlayerTeamPrivate = NULL;
    this->bSkipReplicatedStats = false;
    this->bAreZoneStatsFinalized = false;
    this->ReadyCheckState = EReadyCheckState::NotReady;
    this->HomeActor = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->TrustedPlatformType = ETrustedPlatformType::Unknown;
    this->bInvitedToConsoleSession = false;
    this->bInitializedPlayerCustomizationOptionsFromClientSettings = false;
    this->CachedPreviousWorldPlayerId = 0;
}

