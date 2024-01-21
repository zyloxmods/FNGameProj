#include "FortMatchmakingKnobsModal.h"

void UFortMatchmakingKnobsModal::SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType) {
}

void UFortMatchmakingKnobsModal::SetInScrimmage() {
}

void UFortMatchmakingKnobsModal::SetInGameMode(bool bIsInGame) {
}



void UFortMatchmakingKnobsModal::OnHoveredItemChanged(UObject* Item, bool bIsHovered) {
}

void UFortMatchmakingKnobsModal::OnCurrentItemSelectionChanged(UObject* Item) {
}

void UFortMatchmakingKnobsModal::OnAcceptAnimationComplete() {
}

void UFortMatchmakingKnobsModal::InitForOptionsComponent_Implementation(UFortActorOptionsComponent* OptionsComponent) {
}


void UFortMatchmakingKnobsModal::HandleCancelClicked_Implementation() {
}

TArray<FString> UFortMatchmakingKnobsModal::GetScrolledOffWhitelistedPlayers() {
    return TArray<FString>();
}

void UFortMatchmakingKnobsModal::ApplyChanges() {
}

UFortMatchmakingKnobsModal::UFortMatchmakingKnobsModal() {
    this->Machine = NULL;
    this->OptionsAsset = NULL;
    this->CurrentPlaylist = NULL;
    this->OptionsList = NULL;
    this->AcceptButton = NULL;
    this->CancelButton = NULL;
    this->RestoreDefaultsButton = NULL;
    this->TextBlock_HeaderText = NULL;
    this->TextBlock_TitleText = NULL;
    this->TextBlock_DescriptionText = NULL;
    this->Image_DisplayImage = NULL;
}

