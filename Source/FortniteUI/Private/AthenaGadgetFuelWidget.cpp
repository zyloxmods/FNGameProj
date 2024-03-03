#include "AthenaGadgetFuelWidget.h"

void UAthenaGadgetFuelWidget::SetItem(UFortWorldItem* Item) {
}

UAthenaGadgetFuelWidget::UAthenaGadgetFuelWidget() {
    this->FortFuelGadgetVisualType = EFortFuelGadgetVisualType::FuelMeter;
    this->FuelGaugeProgressImage = NULL;
    this->CurrentChargesText = NULL;
}

