#include "FortPlayerInput.h"

UFortPlayerInput::UFortPlayerInput() {
    CampaignDefaultKBMPresetName = TEXT("ConfigKBM_Campaign");
    AthenaDefaultKBMPresetName = TEXT("ConfigKBM_Athena");
    CampaignKBMResetToDefaultPresetNames.AddDefaulted(2);
    AthenaKBMResetToDefaultPresetNames.AddDefaulted(2);
    DefaultGamepadPresetName = TEXT("ConfigG");
    DefaultGamepadPresetNameAthena = TEXT("ConfigG_Athena");
    DefaultGamepadPresetNameAthenaMobile = TEXT("ConfigG_Athena");
    CustomGamepadPresetNameAthena = TEXT("ConfigCustom_Athena");
    FortPlayerInputSettingsNames.AddDefaulted(16);
    TouchLookAccelerationMultiplier = 1;
    TouchBuildingMultiplier = 1;
    TouchEditModeMultiplier = 1;
    MotionYawAxis = EFortMotionYawAxis::Yaw;
    TargetingMultiplier = 1;
    ScopedMultiplier = 1;
    GamepadTargetingMultiplier = 1;
    GamepadScopedMultiplier = 1;
    GamepadBuildingMultiplier = 1;
    GamepadEditModeMultiplier = 1;
    bInvertedPitchForMotion = false;
    bInvertedYawMobile = false;
    MotionTargetingMultiplier = 1;
    MotionScopedMultiplier = 1;
    MotionHarvestingToolMultiplier = 1;
    GamepadMoveStickDeadZone = 1;
    GamepadLookStickDeadZone = 1;
    DesiredKBMPlayerInputSettings = NULL;
    DesiredGamepadPlayerInputSettings = NULL;
    InputActionTypeFriendlyNames.AddDefaulted(4);
    InputActionGroupContexts.AddDefaulted(447);
    InputActionGroupExemptFromAllModesCheck.AddDefaulted(45);
}

