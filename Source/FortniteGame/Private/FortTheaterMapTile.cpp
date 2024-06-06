#include "FortTheaterMapTile.h"
#include "Components/StaticMeshComponent.h"


void AFortTheaterMapTile::OnTileClicked(AActor* ClickedActor, FKey ButtonReleased) {
}

void AFortTheaterMapTile::OnSelectWrapper(bool bIsGameSessionOwner) {
}


void AFortTheaterMapTile::OnMouseOverEnd(AActor* MousedOverActor) {
}

void AFortTheaterMapTile::OnMouseOverBegin(AActor* MousedOverActor) {
}









void AFortTheaterMapTile::OnDeselectWrapper(bool bIsGameSessionOwner) {
}




bool AFortTheaterMapTile::IsTileValidForMarkedQuest(UFortQuestItem*& OutMarkedQuest) const {
    return false;
}

bool AFortTheaterMapTile::IsTileSelectable() const {
    return false;
}

bool AFortTheaterMapTile::IsTileQuestRecommended() const {
    return false;
}

bool AFortTheaterMapTile::IsTilePlayable() const {
    return false;
}

bool AFortTheaterMapTile::IsTileLocked() const {
    return false;
}

bool AFortTheaterMapTile::IsTileInPhoenixTheater() const {
    return false;
}

bool AFortTheaterMapTile::IsTileHidden() const {
    return false;
}

bool AFortTheaterMapTile::IsTeamRatingDataValid() const {
    return false;
}

bool AFortTheaterMapTile::IsMissionAlertTile() const {
    return false;
}

bool AFortTheaterMapTile::HasValidMissionData() const {
    return false;
}

FGameDifficultyInfo AFortTheaterMapTile::GetZoneDifficulty() const {
    return FGameDifficultyInfo{};
}

bool AFortTheaterMapTile::GetMissionDefinitionIcon(FSlateBrush& OutMissionDefIcon) const {
    return false;
}

int32 AFortTheaterMapTile::GetMissionContentDifficultyLevel() const {
    return 0;
}

FGameplayTagContainer AFortTheaterMapTile::GetMissionAlertVisualTags() const {
    return FGameplayTagContainer{};
}

FName AFortTheaterMapTile::GetMissionAlertCategoryName() const {
    return NAME_None;
}

bool AFortTheaterMapTile::DoesTileAllowQuickplay() const {
    return false;
}

AFortTheaterMapTile::AFortTheaterMapTile() {
    bFocused = false;
    bHostSelected = false;
    bGoToPromptEnabled = false;
    bHasFinishedLoading = false;
    TileType = EFortTheaterMapTileType::Normal;
    ZoneThemeClass = NULL;
    TileIndex = 0;
    RegionIndex = 0;
    SelectionInterpSpeed = 1;
    NormalBrightness = 1;
    LockedBrightness = 1;
    FocusedBrightness = 1;
    SelectedBrightnessRange = 1;
    SelectedPulseSpeed = 1;
    bEnableBrightnessCode = true;
    bDisallowQuickplay = false;
    StaticMeshMaterialID = 1;
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
}

