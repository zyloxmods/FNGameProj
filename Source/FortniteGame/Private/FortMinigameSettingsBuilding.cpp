#include "FortMinigameSettingsBuilding.h"
#include "FortCreativeVolumeLinkComponent.h"
#include "Net/UnrealNetwork.h"

void AFortMinigameSettingsBuilding::UpdateMatchmakingSettings() {
}

void AFortMinigameSettingsBuilding::SetGameDescription(const FText& GameName, const TArray<FText>& GameDescriptionText) {
}

void AFortMinigameSettingsBuilding::OnRep_SettingsVolume() {
}

void AFortMinigameSettingsBuilding::OnRep_GameNameData() {
}

void AFortMinigameSettingsBuilding::OnRep_GameDescriptionData() {
}

void AFortMinigameSettingsBuilding::OnMinigameStarted() {
}

void AFortMinigameSettingsBuilding::OnMinigameEnded() {
}

void AFortMinigameSettingsBuilding::OnLinkedVolumeSet(AFortVolume* PreviousVolume, AFortVolume* NewVolume) {
}

FText AFortMinigameSettingsBuilding::GetGameName() {
    return FText::GetEmpty();
}

TArray<FText> AFortMinigameSettingsBuilding::GetGameDescription() {
    return TArray<FText>();
}

void AFortMinigameSettingsBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameDescriptionData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameNameData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, SettingsVolume);
}

AFortMinigameSettingsBuilding::AFortMinigameSettingsBuilding() {
    this->CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
    this->bShowPublishWatermark = true;
    this->bAllowOutOfBounds = true;
    this->MinimumNumberOfPlayersUserSetting = 0;
    this->MaximumNumberOfPlayersUserSetting = 0;
    this->JoinInProgress = 0;
    this->PlayerScript = NULL;
    this->SettingsVolume = NULL;
}

