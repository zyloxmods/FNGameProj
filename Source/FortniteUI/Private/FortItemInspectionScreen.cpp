#include "FortItemInspectionScreen.h"

void UFortItemInspectionScreen::SetItemToRepresent(UFortItem* Item) {
}

void UFortItemInspectionScreen::SetInspectionMode(EFortItemInspectionMode NewInspectMode) {
}

void UFortItemInspectionScreen::SetAttemptingConversion(bool bIsAttemptingConversion) {
}

void UFortItemInspectionScreen::OpenItemInspect(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride) {
}

bool UFortItemInspectionScreen::IsItemSlottedInCollectionBook(const UFortItem* Item) const {
    return false;
}


void UFortItemInspectionScreen::HandleItemToInspectDestroyed() {
}


void UFortItemInspectionScreen::HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}




UFortAccountItem* UFortItemInspectionScreen::GetRefundResultItem() const {
    return NULL;
}

FText UFortItemInspectionScreen::GetRefundDescriptionText() const {
    return FText::GetEmpty();
}

int32 UFortItemInspectionScreen::GetItemQuantityOverride() const {
    return 0;
}

UFortItemInspectCycleWidget* UFortItemInspectionScreen::GetCycleWidget() {
    return NULL;
}

bool UFortItemInspectionScreen::DoesItemHaveLegacyAlterations() const {
    return false;
}

void UFortItemInspectionScreen::DoAlterationModification() {
}

UFortItemInspectionScreen::UFortItemInspectionScreen() {
    this->CurrentInspectMode = EFortItemInspectionMode::Overview;
    this->UpgradeAllowed = false;
    this->EvolveAllowed = false;
    this->FavoriteAllowed = false;
    this->RarityUpgradingAllowed = false;
    this->IsPreviewing = false;
    this->bHasSeenRefundHelpPrompt = false;
    this->CycleWidget = NULL;
    this->AlterationModOptinScreenClass = NULL;
    this->AlterationModScreenClass = NULL;
}

