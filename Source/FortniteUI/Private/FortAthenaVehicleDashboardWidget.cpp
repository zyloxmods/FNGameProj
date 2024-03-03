#include "FortAthenaVehicleDashboardWidget.h"




void UFortAthenaVehicleDashboardWidget::SetupVehicleFuelWidget(AActor* NewVehicle, const bool bRequestShowWidget) {
}






void UFortAthenaVehicleDashboardWidget::OnAddedFuel(float NewFuelPercent) {
}

AFortAthenaVehicle* UFortAthenaVehicleDashboardWidget::GetVehicle() const {
    return NULL;
}

float UFortAthenaVehicleDashboardWidget::GetHUDTopSpeed() const {
    return 0.0f;
}

UFortAthenaVehicleDashboardWidget::UFortAthenaVehicleDashboardWidget() {
    this->bIsWidgetShowing = false;
    this->CurrentVehicleActor = NULL;
    this->CurrentSpeed = 1;
    this->TargetFuelPercent = 1;
    this->DisplayedFuelPercent = 1;
    this->FillBlendSpeed = 1;
    this->SpeedTextMaxInterpolationRate = 1;
    this->NumericText_Speed = NULL;
    this->HUDTopSpeed = 1;
}

