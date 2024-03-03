#include "FortAthenaSKVehicle.h"
#include "FortVehicleSkelMeshComponent.h"

bool AFortAthenaSKVehicle::HasPermissionToAlterBuildings() const {
    return false;
}

USkeletalMeshComponent* AFortAthenaSKVehicle::GetSkeletalMeshComponent() const {
    return NULL;
}

float AFortAthenaSKVehicle::GetModifiedDamageForActor(float Damage, const ABuildingActor* BuildingActor) const {
    return 0.0f;
}

AFortAthenaSKVehicle::AFortAthenaSKVehicle() {
    this->SkeletalMesh = CreateDefaultSubobject<UFortVehicleSkelMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->WheelOffsetFR = 1;
    this->WheelOffsetFL = 1;
    this->WheelOffsetLimitF = 1;
    this->WheelOffsetBR = 1;
    this->WheelOffsetBL = 1;
    this->WheelOffsetLimitB = 1;
    this->WheelOffsetLerpPerSecondUp = 1;
    this->WheelOffsetLerpPerSecondDown = 1;
    this->AxleOffsetZ = 1;
    this->AxleCenterF = 1;
    this->AxleCenterB = 1;
    this->AxleRollF = 1;
    this->AxleRollB = 1;
    this->WheelRotationFR = 1;
    this->WheelRotationFL = 1;
    this->WheelRotationBR = 1;
    this->WheelRotationBL = 1;
    this->WheelRotationVelocityFR = 1;
    this->WheelRotationVelocityFL = 1;
    this->WheelRotationVelocityBR = 1;
    this->WheelRotationVelocityBL = 1;
    this->WheelSpinFR = 1;
    this->WheelSpinFL = 1;
    this->WheelSpinBR = 1;
    this->WheelSpinBL = 1;
    this->WheelSpinVelocityFR = 1;
    this->WheelSpinVelocityFL = 1;
    this->WheelSpinVelocityBR = 1;
    this->WheelSpinVelocityBL = 1;
    this->WheelSpinDampingPerSecond = 1;
    this->bShouldDealDamage = true;
}

