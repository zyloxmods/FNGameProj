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
    SkeletalMesh = CreateDefaultSubobject<UFortVehicleSkelMeshComponent>(TEXT("SkeletalMeshComponent"));
    WheelOffsetFR = 1;
    WheelOffsetFL = 1;
    WheelOffsetLimitF = 1;
    WheelOffsetBR = 1;
    WheelOffsetBL = 1;
    WheelOffsetLimitB = 1;
    WheelOffsetLerpPerSecondUp = 1;
    WheelOffsetLerpPerSecondDown = 1;
    AxleOffsetZ = 1;
    AxleCenterF = 1;
    AxleCenterB = 1;
    AxleRollF = 1;
    AxleRollB = 1;
    WheelRotationFR = 1;
    WheelRotationFL = 1;
    WheelRotationBR = 1;
    WheelRotationBL = 1;
    WheelRotationVelocityFR = 1;
    WheelRotationVelocityFL = 1;
    WheelRotationVelocityBR = 1;
    WheelRotationVelocityBL = 1;
    WheelSpinFR = 1;
    WheelSpinFL = 1;
    WheelSpinBR = 1;
    WheelSpinBL = 1;
    WheelSpinVelocityFR = 1;
    WheelSpinVelocityFL = 1;
    WheelSpinVelocityBR = 1;
    WheelSpinVelocityBL = 1;
    WheelSpinDampingPerSecond = 1;
    bShouldDealDamage = true;
}

