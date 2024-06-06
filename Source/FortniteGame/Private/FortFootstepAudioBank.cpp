#include "FortFootstepAudioBank.h"

void UFortFootstepAudioBank::GetSurfaceInfo(FFortFootstepSurfaceInfo& OutInfo, TEnumAsByte<EFortFootstepSurfaceType::Type> InSurfaceType, bool bUse1PFootsteps) const {
}

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
    PhysicalSurfaceMappings[0] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[1] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[2] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[3] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[4] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[5] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[6] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[7] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[8] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[9] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[10] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[11] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[12] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[13] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[14] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[15] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[16] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[17] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[18] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[19] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[20] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[21] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[22] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[23] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[24] = EFortFootstepSurfaceType::Default;
    PhysicalSurfaceMappings[25] = EFortFootstepSurfaceType::Default;
    TeammateVolumeMultiplier = 1;
    MaxFootstepDistance = 1;
    VerticalPitchMaxBelow = 1;
    VerticalPitchMaxAbove = 1;
    VerticalPitchTileRange = 1;
    VersionNumber = 0;
}

