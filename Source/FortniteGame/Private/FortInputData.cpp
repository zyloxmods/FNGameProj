#include "FortInputData.h"

FText UFortInputData::GetUseOrReloadLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetTrapInventoryHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetToggleInventoryLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetToggleFullScreenMapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetSwitchQuickBarTapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetSwitchQuickbarLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetSprintLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetScreenLabel(const FName PresetName, const EFortInputActionGroup InputActionGroup, const FName ActionName, const bool bRichText) const {
    return FText::GetEmpty();
}

FText UFortInputData::GetRotateBuildingTapRepairHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetRotateBuildingLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetRepairLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetRepairImproveSpotEnemyLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetRepairHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetReloadTapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetReloadLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPreviousWeaponTapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPreviousWeaponLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPreviousBuildingPieceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPlaceBuildingOrTrapConfirmLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPickTrapTapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPickTrapTapHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetPickTrapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetNextWeaponTapLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetNextWeaponLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetNextBuildingPieceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetMoveLabel() {
    return FText::GetEmpty();
}

FText UFortInputData::GetLookLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetJumpLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetInteractTapHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetHarvestWeaponLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetHarvestWeaponHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadWallSelectAndPlaceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadTrapSelectAndPlaceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadTrapPickerHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadStairSelectAndPlaceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadRoofSelectAndPlaceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadFloorSelectAndPlaceLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGamepadChangeMaterialOrTrapPickerLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGameMenuLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGadget2Label() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetGadget1Label() const {
    return FText::GetEmpty();
}

UFortInputData* UFortInputData::GetFortInputDataForBlueprint() {
    return NULL;
}

FText UFortInputData::GetEmoteOrQuickChatLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetEmoteLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetEditBuildingPieceHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetDeployHoverboardLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetCrouchLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetCraftAmmoHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetChatHoldLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetChangeMaterialLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetBuildingEditResetLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAutoSprintLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAttackConfirmLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAimDownSightsLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAimDownSightsHeavyMeleeLabel() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAbility3Label() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAbility2Label() const {
    return FText::GetEmpty();
}

FText UFortInputData::GetAbility1Label() const {
    return FText::GetEmpty();
}

UFortInputData::UFortInputData() {
    ConfigDName = TEXT("ConfigD");
    ConfigEName = TEXT("ConfigE");
    ConfigFName = TEXT("ConfigF");
    ConfigGName = TEXT("ConfigG");
    ConfigDAthenaName = TEXT("ConfigD_Athena");
    ConfigEAthenaName = TEXT("ConfigE_Athena");
    ConfigFAthenaName = TEXT("ConfigF_Athena");
    ConfigGAthenaName = TEXT("ConfigG_Athena");
    ConfigHAthenaName = TEXT("ConfigH_Athena");
    ConfigCustomAthenaName = TEXT("ConfigCustom_Athena");
    GamepadAbility1Name = TEXT("GamepadAbility1");
    GamepadAbility2Name = TEXT("GamepadAbility2");
    GamepadAbility1AName = TEXT("GamepadAbility1PartA");
    GamepadAbility1BName = TEXT("GamepadAbility1PartB");
    GamepadAbility2AName = TEXT("GamepadAbility2PartA");
    GamepadAbility2BName = TEXT("GamepadAbility2PartB");
    GamepadAbility3AName = TEXT("GamepadAbility3PartA");
    GamepadAbility3BName = TEXT("GamepadAbility3PartB");
    GamepadPreviousBuildingName = TEXT("GamepadPreviousBuilding");
    GamepadNextBuildingName = TEXT("GamepadNextBuilding");
    GamepadBuildingSlot1Name = TEXT("GamepadBuildingSlot1");
    GamepadBuildingSlot2Name = TEXT("GamepadBuildingSlot2");
    GamepadBuildingSlot3Name = TEXT("GamepadBuildingSlot3");
    GamepadBuildingSlot4Name = TEXT("GamepadBuildingSlot4");
    GamepadToggleHarvestWeaponName = TEXT("GamepadToggleHarvestWeapon");
    GamepadToggleHarvestWeaponOrAltInteractName = TEXT("GamepadToggleHarvestWeaponOrAltInteract");
    GamepadToggleCreativePhoneWeaponName = TEXT("GamepadToggleCreativePhoneWeapon");
    GamepadToggleHarvestOrHoldCreativePhoneName = TEXT("GamepadToggleHarvestOrHoldCreativePhone");
    GamepadSelectPreviousWeaponName = TEXT("GamepadSelectPreviousWeapon");
    GamepadSelectNextWeaponName = TEXT("GamepadSelectNextWeapon");
    GamepadCreativeQuickbarSelectNextName = TEXT("GamepadCreativeQuickbarSelectNext");
    GamepadCreativeQuickbarSelectPreviousName = TEXT("GamepadCreativeQuickbarSelectPrevious");
    GamepadNextWeaponOrHarvestHoldName = TEXT("GamepadNextWeaponOrHarvestHold");
    GamepadNextWeaponOrAltInteractOrHarvestHoldName = TEXT("GamepadNextWeaponOrAltInteractOrHarvestHold");
    GamepadTapSelectPreviousWeaponForChordAbilities = TEXT("GamepadTapSelectPreviousWeaponForModalAbilities");
    GamepadTapSelectNextWeaponForChordAbilities = TEXT("GamepadTapSelectNextWeaponForModalAbilities");
    GamepadTrapPickerName = TEXT("GamepadTrapPicker");
    GamepadUseOrTrapPickerName = TEXT("GamepadUseOrTrapPicker");
    GamepadUseOrTrapPickerAndPlaceName = TEXT("GamepadUseOrTrapPickerAndPlace");
    GamepadChangeMaterialOrHarvestHoldName = TEXT("GamepadChangeMaterialOrHarvestHold");
    GamepadSwitchModeOrEditBuildingName = TEXT("GamepadSwitchModeOrEditBuilding");
    GamepadImproveOrRotateBuildingPieceName = TEXT("GamepadImproveOrRotateBuildingPiece");
    GamepadRepairHoldOrRotateBuildingPieceName = TEXT("GamepadRepairHoldOrRotateBuildingPiece");
    GamepadPerformBuildingEditInteractionOrCancelPersonalVehicleName = TEXT("GamepadPerformBuildingEditInteractionOrCancelPersonalVehicle");
    DBNOCarryHoistName = TEXT("DBNOCarryHoist");
    AlternateInteractCarryName = TEXT("AlternateInteractCarry");
    HotbarKey1Name = TEXT("HotbarKey1");
    HotbarKey2Name = TEXT("HotbarKey2");
    HotbarKey3Name = TEXT("HotbarKey3");
    HotbarKey4Name = TEXT("HotbarKey4");
    HotbarKey5Name = TEXT("HotbarKey5");
    HotbarKey6Name = TEXT("HotbarKey6");
    HotbarKey7Name = TEXT("HotbarKey7");
    HotbarKey8Name = TEXT("HotbarKey8");
    HotbarKey9Name = TEXT("HotbarKey9");
    HotbarKeyF1Name = TEXT("HotbarKeyF1");
    HotbarKeyF2Name = TEXT("HotbarKeyF2");
    HotbarKeyF3Name = TEXT("HotbarKeyF3");
    HotbarKeyF4Name = TEXT("HotbarKeyF4");
    HotbarKeyF5Name = TEXT("HotbarKeyF5");
    HotbarKeyF6Name = TEXT("HotbarKeyF6");
    HotbarKeyF7Name = TEXT("HotbarKeyF7");
    HotbarKeyF8Name = TEXT("HotbarKeyF8");
    HotbarKeyF9Name = TEXT("HotbarKeyF9");
    HotbarKeyF10Name = TEXT("HotbarKeyF10");
    HotbarKeyF11Name = TEXT("HotbarKeyF11");
    HotbarKeyF12Name = TEXT("HotbarKeyF12");
    CreativeQuickbarActivateClutchName = TEXT("CreativeQuickbarActivateClutch");
    CreativeQuickbarKey1Name = TEXT("CreativeQuickbarKey1");
    CreativeQuickbarKey2Name = TEXT("CreativeQuickbarKey2");
    CreativeQuickbarKey3Name = TEXT("CreativeQuickbarKey3");
    CreativeQuickbarKey4Name = TEXT("CreativeQuickbarKey4");
    CreativeQuickbarKey5Name = TEXT("CreativeQuickbarKey5");
    CreativeQuickbarKey6Name = TEXT("CreativeQuickbarKey6");
    CreativeQuickbarKey7Name = TEXT("CreativeQuickbarKey7");
    CreativeQuickbarKey8Name = TEXT("CreativeQuickbarKey8");
    TrapPickerName = TEXT("TrapPicker");
    ChangeMaterialName = TEXT("ChangeMaterial");
    BuildConfirmName = TEXT("BuildConfirm");
    PerformBuildingEditInteractionName = TEXT("PerformBuildingEditInteraction");
    PerformBuildingImprovementInteractionName = TEXT("PerformBuildingImprovementInteraction");
    PickerConfirmName = TEXT("PickerConfirm");
    EndOfZonePickerConfirmName = TEXT("EndOfZonePickerConfirm");
    PickerCancelName = TEXT("PickerCancel");
    EmotePickerName = TEXT("EmotePicker");
    SquadQuickChatPickerName = TEXT("SquadQuickChatPicker");
    SwitchQuickBarName = TEXT("SwitchQuickbar");
    UseName = TEXT("Use");
    UseOrReloadName = TEXT("UseOrReload");
    ReloadName = TEXT("Reload");
    InventoryOrChatHoldName = TEXT("InventoryOrChatHold");
    FireName = TEXT("Fire");
    TargetName = TEXT("Target");
    RotatePrimitiveClockwiseName = TEXT("RotatePrimitiveClockwise");
    ToggleFullScreenMapName = TEXT("ToggleFullScreenMap");
    GamepadToggleFullScreenMapName = TEXT("GamepadToggleFullScreenMap");
    GamepadToggleFullScreenMapWhileBuildingName = TEXT("GamepadToggleFullScreenMapWhileBuilding");
    GamepadToggleFullScreenMapWhileEditingName = TEXT("GamepadToggleFullScreenMapWhileEditing");
    ToggleInventoryName = TEXT("ToggleInventory");
    GamepadToggleInventoryName = TEXT("GamepadToggleInventory");
    GamepadToggleInventoryWhileBuildingName = TEXT("GamepadToggleInventoryWhileBuilding");
    GamepadToggleInventoryWhileEditingName = TEXT("GamepadToggleInventoryWhileEditing");
    JumpName = TEXT("Jump");
    GamepadJumpName = TEXT("GamepadJump");
    CrouchName = TEXT("Crouch");
    CrouchWhileBuildingName = TEXT("CrouchWhileBuilding");
    CrouchWhileEditingName = TEXT("CrouchWhileEditing");
    CrouchOrRepairName = TEXT("CrouchOrRepair");
    CrouchOrRepairWhileBuildingName = TEXT("CrouchOrRepairWhileBuilding");
    CrouchOrRepairWhileEditingName = TEXT("CrouchOrRepairWhileEditing");
    ShoppingCartCoastName = TEXT("ShoppingCartCoast");
    CannonShootName = TEXT("CannonShoot");
    GamepadCannonShootName = TEXT("GamepadCannonShoot");
    CannonCoastName = TEXT("CannonCoast");
    GamepadCannonCoastName = TEXT("GamepadCannonCoast");
    GolfCartEBrakeName = TEXT("GolfCartEBrake");
    GamepadGolfCartEBrakeLeftName = TEXT("GamepadGolfCartEBrakeLeft");
    GamepadGolfCartEBrakeRightName = TEXT("GamepadGolfCartEBrakeRight");
    GamepadGolfCartForwardName = TEXT("GamepadGolfCartForward");
    GamepadGolfCartReverseName = TEXT("GamepadGolfCartReverse");
    GolfCartHonkName = TEXT("GolfCartHonk");
    GamepadQuadCrasherForwardName = TEXT("GamepadQuadCrasherForward");
    GamepadQuadCrasherReverseName = TEXT("GamepadQuadCrasherReverse");
    QuadCrasherHonkName = TEXT("QuadCrasherHonk");
    QuadCrasherBoostName = TEXT("QuadCrasherBoost");
    GamepadQuadCrasherBoostLeftName = TEXT("GamepadQuadCrasherBoostLeft");
    GamepadQuadCrasherBoostRightName = TEXT("GamepadQuadCrasherBoostRight");
    GamepadQuadCrasherBoostExtraName = TEXT("GamepadQuadCrasherBoostExtra");
    JackalBoostName = TEXT("JackalBoost");
    GamepadJackalBoostLeftName = TEXT("GamepadJackalBoostLeft");
    GamepadJackalBoostRightName = TEXT("GamepadJackalBoostRight");
    JackalUseOrExitName = TEXT("JackalUseOrExit");
    GamepadJackalExitName = TEXT("GamepadJackalExit");
    GamepadJackalUseOrExitName = TEXT("GamepadJackalUseOrExit");
    HamsterballBoostName = TEXT("HamsterballBoost");
    HamsterballShootName = TEXT("HamsterballShoot");
    HamsterballExtendName = TEXT("HamsterballRetract");
    GamepadHamsterballBoostLeftName = TEXT("GamepadHamsterballBoostLeft");
    GamepadHamsterballBoostRightName = TEXT("GamepadHamsterballBoostRight");
    GamepadHamsterballShootName = TEXT("GamepadHamsterballShoot");
    GamepadHamsterballExtendName = TEXT("GamepadHamsterballRetract");
    BiplanePitchForward = TEXT("BiplanePitchForward");
    BiplanePitchForwardSecondary = TEXT("BiplanePitchForwardSecondary");
    BiplaneRollRightName = TEXT("BiplaneRollRight");
    BiplaneRollLeftName = TEXT("BiplaneRollLeft");
    BiplaneRollInvertName = TEXT("BiplaneRollInvert");
    BiplaneStartEngineName = TEXT("BiplaneStartEngine");
    BiplaneStopEngineName = TEXT("BiplaneStopEngine");
    BiplaneTaxiBackwardsName = TEXT("BiplaneTaxiBackwards");
    BiplaneBoostName = TEXT("BiplaneBoost");
    BiplaneShootName = TEXT("BiplaneShoot");
    BiplaneFreelookName = TEXT("BiplaneFreelook");
    GamepadBiplanePitchForward = TEXT("BiplanePitchForward_Gamepad");
    GamepadBiplaneRollRightName = TEXT("GamepadBiplaneRollRight");
    GamepadBiplaneRollLeftName = TEXT("GamepadBiplaneRollLeft");
    GamepadBiplaneStartEngineName = TEXT("GamepadBiplaneStartEngine");
    GamepadBiplaneStopEngineName = TEXT("GamepadBiplaneStopEngine");
    GamepadBiplaneTaxiBackwardsName = TEXT("GamepadBiplaneTaxiBackwards");
    GamepadBiplaneBoostName = TEXT("GamepadBiplaneBoost");
    GamepadBiplaneShootName = TEXT("GamepadBiplaneShoot");
    OstrichBoostName = TEXT("OstrichBoost");
    GamepadOstrichBoostName = TEXT("GamepadOstrichBoost");
    OstrichJumpName = TEXT("OstrichJump");
    GamepadOstrichJumpName = TEXT("GamepadOstrichJump");
    OstrichPrimaryFireName = TEXT("OstrichPrimaryFire");
    GamepadOstrichPrimaryFireName = TEXT("GamepadOstrichPrimaryFire");
    OstrichSecondaryFireName = TEXT("OstrichSecondaryFire");
    GamepadOstrichSecondaryFireName = TEXT("GamepadOstrichSecondaryFire");
    OstrichShieldBoostName = TEXT("OstrichShieldBoost");
    GamepadOstrichShieldBoostName = TEXT("GamepadOstrichShieldBoost");
    OstrichSelfDestructName = TEXT("OstrichSelfDestruct");
    GamepadOstrichSelfDestructName = TEXT("GamepadOstrichSelfDestruct");
    TogglePickAxeName = TEXT("TogglePickAxe");
    ToggleCreativePhoneName = TEXT("ToggleCreativePhone");
    ToggleQuickMenuName = TEXT("ToggleQuickMenu");
    GamepadEmotePickerOrReplayLastEmoteHoldName = TEXT("GamepadEmotePickerOrReplayLastEmoteHold");
    GamepadEmotePickerOrReplayLastEmoteHoldWhileBuildingName = TEXT("GamepadEmotePickerOrReplayLastEmoteHoldWhileBuilding");
    GamepadEmotePickerOrReplayLastEmoteHoldWhileEditingName = TEXT("GamepadEmotePickerOrReplayLastEmoteHoldWhileEditing");
    GamepadSwitchModeName = TEXT("GamepadSwitchMode");
    CreativeMoveToolEquippedGrabOrLetGoName = TEXT("CreativeMoveToolEquippedGrabOrLetGo");
    CreativeMoveToolEquippedCopyGrabOrDuplicateName = TEXT("CreativeMoveToolEquippedCopyGrabOrDuplicate");
    CreativePossessPropActivateName = TEXT("PossessPropActivate");
    CreativeMoveToolEquippedDeleteName = TEXT("CreativeMoveToolEquippedDelete");
    CreativeToggleGhostName = TEXT("CreativeToggleGhost");
    CreativeToggleHeatmapName = TEXT("CreativeToggleHeatmap");
    CreativeMoveToolMultiSelectName = TEXT("CreativeMoveToolMultiSelect");
    CreativeMoveToolClearMultiSelectName = TEXT("CreativeMoveToolClearMultiSelect");
    CreativeMoveObjectsFreelyLetGoName = TEXT("CreativeMoveObjectsFreelyLetGo");
    CreativeMoveObjectsFreelyDuplicateName = TEXT("CreativeMoveObjectsFreelyDuplicate");
    CreativeMoveObjectsFreelyDropToFloorName = TEXT("CreativeMoveObjectsFreelyDropToFloor");
    CreativeMoveObjectsFreelyRotateClockwiseName = TEXT("CreativeMoveObjectsFreelyRotateClockwise");
    CreativeMoveObjectsFreelyRotateCounterclockwiseName = TEXT("CreativeMoveObjectsFreelyRotateCounterclockwise");
    CreativeMoveObjectsFreelySwitchAxisName = TEXT("CreativeMoveObjectsFreelySwitchAxis");
    CreativeMoveObjectsFreelyPushName = TEXT("CreativeMoveObjectsFreelyPush");
    CreativeMoveObjectsFreelyPullName = TEXT("CreativeMoveObjectsFreelyPull");
    CreativeMoveObjectsFreelyExitName = TEXT("CreativeMoveObjectsFreelyExit");
    CreativeMoveObjectsFreelyChangePrecisionLevelName = TEXT("CreativeMoveObjectsFreelyChangePrecisionLevel");
    CreativeMoveBuildingsOnGridLetGoName = TEXT("CreativeMoveBuildingsOnGridLetGo");
    CreativeMoveBuildingsOnGridDuplicateName = TEXT("CreativeMoveBuildingsOnGridDuplicate");
    CreativeMoveBuildingsOnGridRotateClockwiseName = TEXT("CreativeMoveBuildingsOnGridRotateClockwise");
    CreativeMoveBuildingsOnGridRotateCounterclockwiseName = TEXT("CreativeMoveBuildingsOnGridRotateCounterclockwise");
    CreativeMoveBuildingsOnGridMirrorName = TEXT("CreativeMoveBuildingsOnGridMirror");
    CreativeMoveBuildingsOnGridExitName = TEXT("CreativeMoveBuildingsOnGridExit");
    CreativeMoveBuildingsOnGridChangePrecisionLevelName = TEXT("CreativeMoveBuildingsOnGridChangePrecisionLevel");
    CreativeFlyUpName = TEXT("CreativeFlyUp");
    CreativeFlyDownName = TEXT("CreativeFlyDown");
    CreativeIslandPanelSupportAffiliateName = TEXT("CreativeIslandPanelSupportAffiliate");
    CreativeIslandPanelStartMinigameName = TEXT("CreativeIslandPanelStartMinigame");
    CreativeIslandPanelToggleDetailsName = TEXT("CreativeIslandPanelToggleDetails");
    InputOptionsList.AddDefaulted(173);
}

