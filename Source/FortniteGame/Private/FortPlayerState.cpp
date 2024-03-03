#include "FortPlayerState.h"
#include "CustomPlayerComponent.h"
#include "FortAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerState::UpdateScoreStatChanged() {
}

void AFortPlayerState::ServerChangeActiveVariantForCosmeticItem_Implementation(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
}
bool AFortPlayerState::ServerChangeActiveVariantForCosmeticItem_Validate(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
    return true;
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

void AFortPlayerState::OnRep_InGhostMode() {
}

void AFortPlayerState::OnRep_HomeActor(AActor* OldHomeActor) {
}

void AFortPlayerState::OnRep_HeroType() {
}

void AFortPlayerState::OnRep_HeroId() {
}

void AFortPlayerState::OnRep_CurrentCharXP() {
}

void AFortPlayerState::OnRep_CharacterGender() {
}

void AFortPlayerState::OnRep_CharacterData() {
}

void AFortPlayerState::OnRep_CharacterColorSwatches() {
}

void AFortPlayerState::OnRep_CharacterBodyType() {
}

void AFortPlayerState::OnRep_bHasStartedPlaying() {
}

void AFortPlayerState::OnRep_BannerInfo() {
}

void AFortPlayerState::OnRep_AccessoryColorSwatches() {
}

bool AFortPlayerState::IsMeshNetPlayer() const {
    return false;
}

bool AFortPlayerState::HasStartedPlaying() const {
    return false;
}

FUniqueNetIdRepl AFortPlayerState::GetUniqueID() const {
    return FUniqueNetIdRepl{};
}

FUniqueNetIdRepl AFortPlayerState::GetPlayerUniqueNetID() const {
    return FUniqueNetIdRepl{};
}

AFortPlayerPawn* AFortPlayerState::GetPlayerPawnOrVehicleDriver() const {
    return NULL;
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

void AFortPlayerState::ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
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
    DOREPLIFETIME(AFortPlayerState, bMeshNetPlayer);
    DOREPLIFETIME(AFortPlayerState, bRepFlag1);
    DOREPLIFETIME(AFortPlayerState, PlayerRole);
    DOREPLIFETIME(AFortPlayerState, WorldPlayerId);
    DOREPLIFETIME(AFortPlayerState, PartyOwnerUniqueId);
    DOREPLIFETIME(AFortPlayerState, HeroId);
    DOREPLIFETIME(AFortPlayerState, HeroType);
    DOREPLIFETIME(AFortPlayerState, CurrentCharXP);
    DOREPLIFETIME(AFortPlayerState, MyBackpackPickup);
    DOREPLIFETIME(AFortPlayerState, InitialExperienceLevel);
    DOREPLIFETIME(AFortPlayerState, InitialExperienceAmount);
    DOREPLIFETIME(AFortPlayerState, ExperienceDeltas);
    DOREPLIFETIME(AFortPlayerState, Platform);
    DOREPLIFETIME(AFortPlayerState, Banner);
    DOREPLIFETIME(AFortPlayerState, bIsSimulatingDamage);
    DOREPLIFETIME(AFortPlayerState, CharacterGender);
    DOREPLIFETIME(AFortPlayerState, CharacterBodyType);
    DOREPLIFETIME(AFortPlayerState, CharacterData);
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
    DOREPLIFETIME(AFortPlayerState, bInGhostMode);
}

AFortPlayerState::AFortPlayerState() {
    this->bIsWorldDataOwner = false;
    this->bIsGameSessionOwner = false;
    this->bIsGameSessionAdmin = false;
    this->bIsReadyToContinue = false;
    this->bHasFinishedLoading = false;
    this->bHasStartedPlaying = false;
    this->bMeshNetPlayer = false;
    this->bRepFlag1 = true;
    this->PlayerRole = EFortPlayerRole::Player;
    this->WorldPlayerId = 0;
    this->HeroType = NULL;
    this->CurrentCharXP = 0;
    this->InitialExperienceLevel = 0;
    this->InitialExperienceAmount = 0;
    this->bIsSimulatingDamage = false;
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
    this->LocalCharacterCharms[0] = NULL;
    this->LocalCharacterCharms[1] = NULL;
    this->LocalCharacterCharms[2] = NULL;
    this->LocalCharacterCharms[3] = NULL;
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
    this->ReadyCheckState = EReadyCheckState::CheckStarted;
    this->HomeActor = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->TrustedPlatformType = ETrustedPlatformType::Unknown;
    this->bInvitedToConsoleSession = false;
    this->bInitializedPlayerCustomizationOptionsFromClientSettings = false;
    this->CachedPreviousWorldPlayerId = 0;
    this->bInGhostMode = false;
}

