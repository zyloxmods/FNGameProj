#include "FortValetAudioController.h"

void AFortValetAudioController::Update_Native() {
}

void AFortValetAudioController::OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude) {
}

void AFortValetAudioController::CacheValetVehicle(AFortDagwoodVehicle* InVehicle) {
}

AFortValetAudioController::AFortValetAudioController() {
    this->RPMResetTime_Native = 1;
    this->JitterAmount_Native = 1;
    this->ShiftTimeThreshold_Native = 1;
    this->TimeSinceShift_Native = 1;
    this->EngineRPMInterp_Native = 1;
    this->EngineRPMLinear_Native = 1;
    this->MinRPMRange_Native = 1;
    this->MaxRPMRange_Native = 1;
    this->bCurrentlyShifting_Native = false;
    this->CurrentAccelRateGearModifier_Native = 1;
    this->CurrentAccelRate_Native = 1;
    this->CurrentGear_Native = 0;
    this->MaxGear_Native = 0;
    this->DefaultAccelRateScalar_Native = 1;
    this->GearAttackInterpSpeed_Native = 1;
    this->GearReleaseInterpSpeed_Native = 1;
    this->AccelRateScalarFirstGear_Native = 1;
    this->AccelRateScalarMinGear_Native = 1;
    this->AccelRateScalarMaxGear_Native = 1;
    this->ShiftToRPMStart_Native = 1;
    this->ShiftToRPMEnd_Native = 1;
    this->ShiftFromRPMStart_Native = 1;
    this->ShiftFromRPMEnd_Native = 1;
    this->MaxRPMSawtoothDecrement_Native = 1;
    this->MaxRPMSawtoothRepeatTime_Native = 1;
    this->DownhillAccelScalar_Native = 1;
    this->UphillAccelScalar_Native = 1;
    this->NormalizedSpeed_Native = 1;
    this->SuspValue_Native = 1;
    this->bIsHandbraking_Native = false;
    this->MotoSynthVolume_Native = 1;
    this->MotoSynthLogRPM_Native = 1;
    this->bHasFuel_Native = false;
    this->bIsInWater_Native = false;
    this->bLocalPlayerInVehicle_Native = false;
    this->TimeLocalPlayerEnteredVehicle_Native = 1;
    this->bAttemptingDirectionChange_Native = false;
    this->bPreDestroy_Native = false;
    this->bEngineLoad_Native = false;
    this->SkidAmount_Native = 1;
    this->TimeSinceAwoken_Native = 1;
    this->bDestroyed_Native = false;
    this->TimeSinceSurfaceChange_Native = 1;
    this->OnInitialSuspensionSound = NULL;
    this->AngleForSkidding_Native = 1;
    this->SpringCompressionMultiplier = 1;
    this->MotoSynthMaxVolume_Native = 1;
    this->Engine_Native = NULL;
    this->BoostAudioComponent_Native = NULL;
    this->SynthComponentMoto_Native = NULL;
    this->SuspensionCollisionComponent_Native = NULL;
}

