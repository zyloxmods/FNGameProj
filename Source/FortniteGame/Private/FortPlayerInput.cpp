#include "FortPlayerInput.h"

UFortPlayerInput::UFortPlayerInput() {
    this->CampaignDefaultKBMPresetName = TEXT("ConfigKBM_Campaign");
    this->AthenaDefaultKBMPresetName = TEXT("ConfigKBM_Athena");
    this->CampaignKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->AthenaKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->DefaultGamepadPresetName = TEXT("ConfigG");
    this->DefaultGamepadPresetNameAthena = TEXT("ConfigG_Athena");
    this->DefaultGamepadPresetNameAthenaMobile = TEXT("ConfigG_Athena");
    this->CustomGamepadPresetNameAthena = TEXT("ConfigCustom_Athena");
    this->FortPlayerInputSettingsNames.AddDefaulted(16);
    this->TouchLookAccelerationMultiplier = 1;
    this->TouchBuildingMultiplier = 1;
    this->TouchEditModeMultiplier = 1;
    this->MotionYawAxis = EFortMotionYawAxis::Yaw;
    this->TargetingMultiplier = 1;
    this->ScopedMultiplier = 1;
    this->GamepadTargetingMultiplier = 1;
    this->GamepadScopedMultiplier = 1;
    this->GamepadBuildingMultiplier = 1;
    this->GamepadEditModeMultiplier = 1;
    this->bInvertedPitchForMotion = false;
    this->bInvertedYawMobile = false;
    this->MotionTargetingMultiplier = 1;
    this->MotionScopedMultiplier = 1;
    this->MotionHarvestingToolMultiplier = 1;
    this->GamepadMoveStickDeadZone = 1;
    this->GamepadLookStickDeadZone = 1;
    this->DesiredKBMPlayerInputSettings = NULL;
    this->DesiredGamepadPlayerInputSettings = NULL;
    this->InputActionTypeFriendlyNames.AddDefaulted(4);
    this->InputActionGroupContexts.AddDefaulted(447);
    this->InputActionGroupExemptFromAllModesCheck.AddDefaulted(45);
}

