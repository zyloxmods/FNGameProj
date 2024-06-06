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

void AFortMinigameSettingsBuilding::OnMinigameSettingsBuildingShowPublishWatermarkChanged(AFortMinigameSettingsBuilding* MinigameSettingsBuilding, bool bNewShowPublishWatermark) {
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

void AFortMinigameSettingsBuilding::CheckShowPublishWatermarkChanged() {
}

void AFortMinigameSettingsBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameDescriptionData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameNameData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, SettingsVolume);
}

AFortMinigameSettingsBuilding::AFortMinigameSettingsBuilding() {
    CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
    bShowPublishWatermark = true;
    bAllowOutOfBounds = true;
    bDeferDeletePlayerBuiltBuildingActorsForRollback = false;
    MinimumNumberOfPlayersUserSetting = 0;
    MaximumNumberOfPlayersUserSetting = 0;
    MmsType = EMMSRulePreset::RespectParties;
    bPrefersRespectingPartiesFromMMS = false;
    MmsPlayerCount = 0;
    MmsPlayersPerTeam = (EMMSPlayersPerTeamPreset)0;
    JoinInProgress = 0;
    ShowResourceFeedOnElimination = 0;
    SettingsVolume = NULL;
}

