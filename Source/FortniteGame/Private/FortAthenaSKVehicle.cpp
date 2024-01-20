#include "FortAthenaSKVehicle.h"
#include "FortVehicleSkelMeshComponent.h"

bool AFortAthenaSKVehicle::HasPermissionToAlterBuildings() const {
    return false;
}

float AFortAthenaSKVehicle::GetModifiedDamageForActor(float Damage, const ABuildingActor* BuildingActor) const {
    return 0.0f;
}

AFortAthenaSKVehicle::AFortAthenaSKVehicle() {
    this->SkeletalMesh = CreateDefaultSubobject<UFortVehicleSkelMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->WheelOffsetFR = 0.00f;
    this->WheelOffsetFL = 0.00f;
    this->WheelOffsetLimitF = 30.00f;
    this->WheelOffsetBR = 0.00f;
    this->WheelOffsetBL = 0.00f;
    this->WheelOffsetLimitB = 30.00f;
    this->WheelOffsetLerpPerSecondUp = 50.00f;
    this->WheelOffsetLerpPerSecondDown = 20.00f;
    this->AxleOffsetZ = 7.00f;
    this->AxleCenterF = 0.00f;
    this->AxleCenterB = 0.00f;
    this->AxleRollF = 0.00f;
    this->AxleRollB = 0.00f;
    this->WheelRotationFR = 0.00f;
    this->WheelRotationFL = 0.00f;
    this->WheelRotationBR = 0.00f;
    this->WheelRotationBL = 0.00f;
    this->WheelRotationVelocityFR = 0.00f;
    this->WheelRotationVelocityFL = 0.00f;
    this->WheelRotationVelocityBR = 0.00f;
    this->WheelRotationVelocityBL = 0.00f;
    this->WheelSpinFR = 0.00f;
    this->WheelSpinFL = 0.00f;
    this->WheelSpinBR = 0.00f;
    this->WheelSpinBL = 0.00f;
    this->WheelSpinVelocityFR = 0.00f;
    this->WheelSpinVelocityFL = 0.00f;
    this->WheelSpinVelocityBR = 0.00f;
    this->WheelSpinVelocityBL = 0.00f;
    this->WheelSpinDampingPerSecond = 0.10f;
    this->bShouldDealDamage = true;
}

