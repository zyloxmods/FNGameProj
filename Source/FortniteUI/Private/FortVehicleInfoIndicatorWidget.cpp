#include "FortVehicleInfoIndicatorWidget.h"

void UFortVehicleInfoIndicatorWidget::SetVehicle(AActor* NewVehicle) {
}

void UFortVehicleInfoIndicatorWidget::OnVehicleHealthChanged_Implementation() {
}


APawn* UFortVehicleInfoIndicatorWidget::GetControlledPawn() const {
    return NULL;
}

UFortVehicleInfoIndicatorWidget::UFortVehicleInfoIndicatorWidget() {
    this->TimeToHideWhenDamaged = 1;
}

