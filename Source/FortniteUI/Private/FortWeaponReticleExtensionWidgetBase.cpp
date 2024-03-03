#include "FortWeaponReticleExtensionWidgetBase.h"





void UFortWeaponReticleExtensionWidgetBase::HandleFullyExitVehicle() {
}

void UFortWeaponReticleExtensionWidgetBase::HandleEnterVehiclePassenger() {
}

void UFortWeaponReticleExtensionWidgetBase::HandleEnterVehicleDriver() {
}

UFortWeaponReticleExtensionWidgetBase::UFortWeaponReticleExtensionWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CachedAssociatedWeapon = NULL;
}

