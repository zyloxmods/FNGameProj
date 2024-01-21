#include "FortVehicleInfoIndicatorWidget.h"

void UFortVehicleInfoIndicatorWidget::SetVehicle(AFortAthenaVehicle* NewVehicle) {
}

void UFortVehicleInfoIndicatorWidget::OnVehicleHealthChanged_Implementation() {
}


UFortVehicleInfoIndicatorWidget::UFortVehicleInfoIndicatorWidget() {
    this->TimeToHideWhenDamaged = 3.00f;
}

