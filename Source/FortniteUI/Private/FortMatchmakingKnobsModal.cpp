#include "FortMatchmakingKnobsModal.h"

void UFortMatchmakingKnobsModal::SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType) {
}

void UFortMatchmakingKnobsModal::SetInScrimmage() {
}

void UFortMatchmakingKnobsModal::SetInGameMode(bool bIsInGame) {
}

void UFortMatchmakingKnobsModal::RemoveFromModalLayer() {
}



void UFortMatchmakingKnobsModal::OnHoveredItemChanged(UObject* Item, bool bIsHovered) {
}

void UFortMatchmakingKnobsModal::OnCurrentItemSelectionChanged(UObject* Item) {
}

void UFortMatchmakingKnobsModal::OnAcceptAnimationComplete() {
}

void UFortMatchmakingKnobsModal::InitializeData() {
}

void UFortMatchmakingKnobsModal::InitForToyOptionsActor(AActor* InActor) {
}

void UFortMatchmakingKnobsModal::InitForOptionsComponent_Implementation(UFortActorOptionsComponent* OptionsComponent) {
}

bool UFortMatchmakingKnobsModal::HasMatchingTags(UObject* Option, FGameplayTagContainer Tags) {
    return false;
}

void UFortMatchmakingKnobsModal::HandleRestoreClicked() {
}


void UFortMatchmakingKnobsModal::HandleCancelClicked_Implementation() {
}

EFortModifiedStatus UFortMatchmakingKnobsModal::GetSpinnerModificationStatus(UFortMatchmakingKnobsSpinnerButton* SpinnerButton) {
    return EFortModifiedStatus::IsDefault;
}

TArray<FString> UFortMatchmakingKnobsModal::GetScrolledOffWhitelistedPlayers() {
    return TArray<FString>();
}

EFortModifiedStatus UFortMatchmakingKnobsModal::GetModificationStatus(UObject* Option) {
    return EFortModifiedStatus::IsDefault;
}

bool UFortMatchmakingKnobsModal::DoesContainString(UObject* Option, const FString& String) {
    return false;
}

void UFortMatchmakingKnobsModal::ApplyChanges(const bool bApplySettingsFromCachedData) {
}

UFortMatchmakingKnobsModal::UFortMatchmakingKnobsModal() {
    this->MobileOptionListEntrySpacing = 1;
    this->Machine = NULL;
    this->OptionsAsset = NULL;
    this->CurrentPlaylist = NULL;
    this->OptionsList = NULL;
    this->AcceptButton = NULL;
    this->TextBlock_HeaderText = NULL;
    this->TextBlock_TitleText = NULL;
    this->TextBlock_DescriptionText = NULL;
    this->Image_DisplayImage = NULL;
}

