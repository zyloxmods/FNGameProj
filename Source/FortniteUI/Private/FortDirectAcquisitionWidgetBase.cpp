#include "FortDirectAcquisitionWidgetBase.h"



void UFortDirectAcquisitionWidgetBase::HandleAffiliateButtonClicked() {
}

FDateTime UFortDirectAcquisitionWidgetBase::GetWeeklyStoreEndDate() const {
    return FDateTime{};
}

TArray<UFortAccountItemDefinition*> UFortDirectAcquisitionWidgetBase::GetStoreCurrencies() const {
    return TArray<UFortAccountItemDefinition*>();
}

FDateTime UFortDirectAcquisitionWidgetBase::GetSeasonStoreEndDate() const {
    return FDateTime{};
}

FDateTime UFortDirectAcquisitionWidgetBase::GetDailyStoreEndDate() const {
    return FDateTime{};
}

UFortDirectAcquisitionWidgetBase::UFortDirectAcquisitionWidgetBase() {
    this->bShowIneligible = false;
}

