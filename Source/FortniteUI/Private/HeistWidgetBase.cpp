#include "HeistWidgetBase.h"

void UHeistWidgetBase::UpdateAllUI() {
}

void UHeistWidgetBase::SetExitCraftUIState(EHeistExitCraftUIState NewState) {
}





void UHeistWidgetBase::OnSpecialActorRemoved(const FSpecialActorRepData& SpecialActorData) {
}

void UHeistWidgetBase::OnSpecialActorAdded(const FSpecialActorRepData& SpecialActorData) {
}

void UHeistWidgetBase::OnMutatorObjectUpdated(const FGameplayMutatorObjectDataArray& MutatorArray) {
}

void UHeistWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}




UHeistWidgetBase::UHeistWidgetBase() {
    this->CurrExitCraftUIState = EHeistExitCraftUIState::None;
    this->bDisplayBlingRow = false;
    this->bCanDisplayVanUI = false;
    this->CurrBlingSupplyDropCount = 0;
    this->CurrBlingItemCount = 0;
    this->CurrBlingEnemyCount = 0;
    this->CurrBlingAllyCount = 0;
}

