#include "FortAnimInput_VehicleDriverAnimAsset.h"

FFortAnimInput_VehicleDriverAnimAsset::FFortAnimInput_VehicleDriverAnimAsset() {
    DriveNPose = NULL;
    DriveEPose = NULL;
    DriveWPose = NULL;
    DriveNAdditivePose = NULL;
    DriveFastAdditivePose = NULL;
    OverrideDriverPose = NULL;
    DriveIdle = NULL;
    DriveIdleFastAdditive = NULL;
    DriverHeadAimOffset = NULL;
    DriveNStart = NULL;
    Braking = NULL;
    BoostStart = NULL;
    BoostLoop = NULL;
    ReverseStart = NULL;
    ReverseLoop = NULL;
    ReverseEnd = NULL;
    ReturnToIdleTransition = NULL;
    PoseCorrectionAdditive = NULL;
    CollisionN = NULL;
    CollisionS = NULL;
    CollisionE = NULL;
    CollisionW = NULL;
}

