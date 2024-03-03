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
    this->FirstOfferGenerated = NULL;
    this->HorizontalBox_LargeTile = NULL;
    this->GridPanel_SmallTile = NULL;
    this->HorizontalBox_ReorderedItems = NULL;
    this->VerticalBox_FeatureItems = NULL;
    this->VerticalBox_DailyItems = NULL;
    this->ScaleBox_Main = NULL;
}

