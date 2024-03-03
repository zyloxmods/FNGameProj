#include "FortAnimInput_VehicleDriverAnimAsset.h"

FFortAnimInput_VehicleDriverAnimAsset::FFortAnimInput_VehicleDriverAnimAsset() {
    this->DriveNPose = NULL;
    this->DriveEPose = NULL;
    this->DriveWPose = NULL;
    this->DriveNAdditivePose = NULL;
    this->DriveFastAdditivePose = NULL;
    this->OverrideDriverPose = NULL;
    this->DriveIdle = NULL;
    this->DriveIdleFastAdditive = NULL;
    this->DriverHeadAimOffset = NULL;
    this->DriveNStart = NULL;
    this->Braking = NULL;
    this->BoostStart = NULL;
    this->BoostLoop = NULL;
    this->ReverseStart = NULL;
    this->ReverseLoop = NULL;
    this->ReverseEnd = NULL;
    this->ReturnToIdleTransition = NULL;
    this->PoseCorrectionAdditive = NULL;
    this->CollisionN = NULL;
    this->CollisionS = NULL;
    this->CollisionE = NULL;
    this->CollisionW = NULL;
}

