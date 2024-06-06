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
    bIsWorldDataOwner = false;
    bIsGameSessionOwner = false;
    bIsGameSessionAdmin = false;
    bIsReadyToContinue = false;
    bHasFinishedLoading = false;
    bHasStartedPlaying = false;
    bMeshNetPlayer = false;
    bRepFlag1 = true;
    PlayerRole = EFortPlayerRole::Player;
    WorldPlayerId = 0;
    HeroType = NULL;
    CurrentCharXP = 0;
    InitialExperienceLevel = 0;
    InitialExperienceAmount = 0;
    bIsSimulatingDamage = false;
    CharacterGender = EFortCustomGender::Both;
    CharacterBodyType = EFortCustomBodyType::Small;
    CharacterColorSwatches[0] = NULL;
    CharacterColorSwatches[1] = NULL;
    LocalCharacterGender = EFortCustomGender::Both;
    LocalCharacterBodyType = EFortCustomBodyType::Small;
    LocalCharacterParts[0] = NULL;
    LocalCharacterParts[1] = NULL;
    LocalCharacterParts[2] = NULL;
    LocalCharacterParts[3] = NULL;
    LocalCharacterParts[4] = NULL;
    LocalCharacterParts[5] = NULL;
    LocalCharacterCharms[0] = NULL;
    LocalCharacterCharms[1] = NULL;
    LocalCharacterCharms[2] = NULL;
    LocalCharacterCharms[3] = NULL;
    LocalCharacterColorSwatches[0] = NULL;
    LocalCharacterColorSwatches[1] = NULL;
    CustomPRIComponent = CreateDefaultSubobject<UCustomPlayerComponent>(TEXT("CustomPRIComponent"));
    CharacterPartColorSwatches[0] = NULL;
    CharacterPartColorSwatches[1] = NULL;
    CharacterPartColorSwatches[2] = NULL;
    CharacterPartColorSwatches[3] = NULL;
    CharacterPartColorSwatches[4] = NULL;
    CharacterPartColorSwatches[5] = NULL;
    LocalCharacterPartColorSwatches[0] = NULL;
    LocalCharacterPartColorSwatches[1] = NULL;
    LocalCharacterPartColorSwatches[2] = NULL;
    LocalCharacterPartColorSwatches[3] = NULL;
    LocalCharacterPartColorSwatches[4] = NULL;
    LocalCharacterPartColorSwatches[5] = NULL;
    PlayerTeam = NULL;
    PlayerTeamPrivate = NULL;
    bSkipReplicatedStats = false;
    bAreZoneStatsFinalized = false;
    ReadyCheckState = EReadyCheckState::CheckStarted;
    HomeActor = NULL;
    AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    TrustedPlatformType = ETrustedPlatformType::Unknown;
    bInvitedToConsoleSession = false;
    bInitializedPlayerCustomizationOptionsFromClientSettings = false;
    CachedPreviousWorldPlayerId = 0;
    bInGhostMode = false;
}

