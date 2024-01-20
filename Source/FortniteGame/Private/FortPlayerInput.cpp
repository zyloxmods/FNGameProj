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
    this->MotionYawAxis = EFortMotionYawAxis::Roll;
    this->bApplyGamepadDownsightsLookScale = false;
    this->TargetingMultiplier = 1.00f;
    this->ScopedMultiplier = 1.00f;
    this->GamepadTargetingMultiplier = 0.65f;
    this->GamepadScopedMultiplier = 0.65f;
    this->GamepadBuildingMultiplier = 1.00f;
    this->GamepadEditModeMultiplier = 1.00f;
    this->bInvertedPitchForMotion = false;
    this->bInvertedYawMobile = false;
    this->MotionTargetingMultiplier = 0.00f;
    this->MotionScopedMultiplier = 0.00f;
    this->MotionHarvestingToolMultiplier = 0.00f;
    this->GamepadMoveStickDeadZone = 0.24f;
    this->GamepadLookStickDeadZone = 0.27f;
    this->DesiredKBMPlayerInputSettings = NULL;
    this->DesiredGamepadPlayerInputSettings = NULL;
    this->InputActionTypeFriendlyNames.AddDefaulted(4);
    this->InputActionGroupContexts.AddDefaulted(302);
    this->InputActionGroupExemptFromAllModesCheck.AddDefaulted(17);
    this->bReduceAimAssistWhileScoped = true;
}

