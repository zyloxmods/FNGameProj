#include "FortFootstepAudioBank.h"

USoundBase* UFortFootstepAudioBank::GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepSurfaceType::Type> SurfaceType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition) {
    return NULL;
}

float UFortFootstepAudioBank::GetFootstepVolumeMultiplier(bool bIsLocal, bool bApplyTeammateVolume, TEnumAsByte<EFortFootstepAudioType::Type> StepType) {
    return 0.0f;
}

USoundAttenuation* UFortFootstepAudioBank::GetAttenuationAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition) {
    return NULL;
}

UFortFootstepAudioBank::UFortFootstepAudioBank() {
    this->PhysicalSurfaceMappings[0] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[1] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[2] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[3] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[4] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[5] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[6] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[7] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[8] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[9] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[10] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[11] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[12] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[13] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[14] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[15] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[16] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[17] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[18] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[19] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[20] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[21] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[22] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[23] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[24] = EFortFootstepSurfaceType::Default;
    this->PhysicalSurfaceMappings[25] = EFortFootstepSurfaceType::Default;
    this->TeammateVolumeMultiplier = 0.50f;
    this->MaxFootstepDistance = 3072.00f;
    this->VerticalPitchMaxBelow = 0.80f;
    this->VerticalPitchMaxAbove = 1.20f;
    this->VerticalPitchTileRange = 3.00f;
}

