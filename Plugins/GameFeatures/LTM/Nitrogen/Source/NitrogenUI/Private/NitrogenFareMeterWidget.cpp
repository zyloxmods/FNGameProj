#include "NitrogenFareMeterWidget.h"





void UNitrogenFareMeterWidget::OnEndFare_Implementation(bool bFareCompleted) {
}

void UNitrogenFareMeterWidget::OnBeginInteraction(const FNitrogenFareInteractionData& FareInteractionData) {
}

void UNitrogenFareMeterWidget::OnBeginFare_Implementation() {
}

void UNitrogenFareMeterWidget::OnActiveBonusUpdated_Implementation(FNitrogenBonusStat& BonusStat, float Value, bool bShouldAwardBonus) {
}



UNitrogenFareMeterWidget::UNitrogenFareMeterWidget() {
    this->DeliveryTimeObjectiveText = NULL;
    this->BonusObjectiveText = NULL;
    this->FarePortrait = NULL;
    this->FareNameTextBlock = NULL;
    this->CurrentFare = NULL;
    this->bThresholdAwardCondition = false;
    this->bFareBonusObjectiveComplete = false;
    this->PortraitMaterialParameterName = TEXT("Portrait");
    this->BorderPercentMaterialParameterName = TEXT("BorderPercent");
    this->PassengerPlayerState = NULL;
}

