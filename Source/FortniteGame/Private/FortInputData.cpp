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
    this->ConfigDName = TEXT("ConfigD");
    this->ConfigEName = TEXT("ConfigE");
    this->ConfigFName = TEXT("ConfigF");
    this->ConfigGName = TEXT("ConfigG");
    this->ConfigDAthenaName = TEXT("ConfigD_Athena");
    this->ConfigEAthenaName = TEXT("ConfigE_Athena");
    this->ConfigFAthenaName = TEXT("ConfigF_Athena");
    this->ConfigGAthenaName = TEXT("ConfigG_Athena");
    this->ConfigHAthenaName = TEXT("ConfigH_Athena");
    this->ConfigCustomAthenaName = TEXT("ConfigCustom_Athena");
    this->GamepadAbility1Name = TEXT("GamepadAbility1");
    this->GamepadAbility2Name = TEXT("GamepadAbility2");
    this->GamepadAbility1AName = TEXT("GamepadAbility1PartA");
    this->GamepadAbility1BName = TEXT("GamepadAbility1PartB");
    this->GamepadAbility2AName = TEXT("GamepadAbility2PartA");
    this->GamepadAbility2BName = TEXT("GamepadAbility2PartB");
    this->GamepadAbility3AName = TEXT("GamepadAbility3PartA");
    this->GamepadAbility3BName = TEXT("GamepadAbility3PartB");
    this->GamepadPreviousBuildingName = TEXT("GamepadPreviousBuilding");
    this->GamepadNextBuildingName = TEXT("GamepadNextBuilding");
    this->GamepadBuildingSlot1Name = TEXT("GamepadBuildingSlot1");
    this->GamepadBuildingSlot2Name = TEXT("GamepadBuildingSlot2");
    this->GamepadBuildingSlot3Name = TEXT("GamepadBuildingSlot3");
    this->GamepadBuildingSlot4Name = TEXT("GamepadBuildingSlot4");
    this->GamepadToggleHarvestWeaponName = TEXT("GamepadToggleHarvestWeapon");
    this->GamepadToggleCreativePhoneWeaponName = TEXT("GamepadToggleCreativePhoneWeapon");
    this->GamepadToggleHarvestOrHoldCreativePhoneName = TEXT("GamepadToggleHarvestOrHoldCreativePhone");
    this->GamepadSelectPreviousWeaponName = TEXT("GamepadSelectPreviousWeapon");
    this->GamepadSelectNextWeaponName = TEXT("GamepadSelectNextWeapon");
    this->GamepadCreativeQuickbarSelectNextName = TEXT("GamepadCreativeQuickbarSelectNext");
    this->GamepadCreativeQuickbarSelectPreviousName = TEXT("GamepadCreativeQuickbarSelectPrevious");
    this->GamepadNextWeaponOrHarvestHoldName = TEXT("GamepadNextWeaponOrHarvestHold");
    this->GamepadTapSelectPreviousWeaponForChordAbilities = TEXT("GamepadTapSelectPreviousWeaponForModalAbilities");
    this->GamepadTapSelectNextWeaponForChordAbilities = TEXT("GamepadTapSelectNextWeaponForModalAbilities");
    this->GamepadTrapPickerName = TEXT("GamepadTrapPicker");
    this->GamepadUseOrTrapPickerName = TEXT("GamepadUseOrTrapPicker");
    this->GamepadUseOrTrapPickerAndPlaceName = TEXT("GamepadUseOrTrapPickerAndPlace");
    this->GamepadChangeMaterialOrHarvestHoldName = TEXT("GamepadChangeMaterialOrHarvestHold");
    this->GamepadSwitchModeOrEditBuildingName = TEXT("GamepadSwitchModeOrEditBuilding");
    this->GamepadImproveOrRotateBuildingPieceName = TEXT("GamepadImproveOrRotateBuildingPiece");
    this->GamepadRepairHoldOrRotateBuildingPieceName = TEXT("GamepadRepairHoldOrRotateBuildingPiece");
    this->GamepadPerformBuildingEditInteractionOrCancelPersonalVehicleName = TEXT("GamepadPerformBuildingEditInteractionOrCancelPersonalVehicle");
    this->HotbarKey1Name = TEXT("HotbarKey1");
    this->HotbarKey2Name = TEXT("HotbarKey2");
    this->HotbarKey3Name = TEXT("HotbarKey3");
    this->HotbarKey4Name = TEXT("HotbarKey4");
    this->HotbarKey5Name = TEXT("HotbarKey5");
    this->HotbarKey6Name = TEXT("HotbarKey6");
    this->HotbarKey7Name = TEXT("HotbarKey7");
    this->HotbarKey8Name = TEXT("HotbarKey8");
    this->HotbarKey9Name = TEXT("HotbarKey9");
    this->HotbarKeyF1Name = TEXT("HotbarKeyF1");
    this->HotbarKeyF2Name = TEXT("HotbarKeyF2");
    this->HotbarKeyF3Name = TEXT("HotbarKeyF3");
    this->HotbarKeyF4Name = TEXT("HotbarKeyF4");
    this->HotbarKeyF5Name = TEXT("HotbarKeyF5");
    this->HotbarKeyF6Name = TEXT("HotbarKeyF6");
    this->HotbarKeyF7Name = TEXT("HotbarKeyF7");
    this->HotbarKeyF8Name = TEXT("HotbarKeyF8");
    this->HotbarKeyF9Name = TEXT("HotbarKeyF9");
    this->HotbarKeyF10Name = TEXT("HotbarKeyF10");
    this->HotbarKeyF11Name = TEXT("HotbarKeyF11");
    this->HotbarKeyF12Name = TEXT("HotbarKeyF12");
    this->CreativeQuickbarKey1Name = TEXT("CreativeQuickbarKey1");
    this->CreativeQuickbarKey2Name = TEXT("CreativeQuickbarKey2");
    this->CreativeQuickbarKey3Name = TEXT("CreativeQuickbarKey3");
    this->CreativeQuickbarKey4Name = TEXT("CreativeQuickbarKey4");
    this->CreativeQuickbarKey5Name = TEXT("CreativeQuickbarKey5");
    this->CreativeQuickbarKey6Name = TEXT("CreativeQuickbarKey6");
    this->CreativeQuickbarKey7Name = TEXT("CreativeQuickbarKey7");
    this->CreativeQuickbarKey8Name = TEXT("CreativeQuickbarKey8");
    this->CreativeQuickbarKey9Name = TEXT("CreativeQuickbarKey9");
    this->CreativeQuickbarKey10Name = TEXT("CreativeQuickbarKey10");
    this->CreativeQuickbarKey11Name = TEXT("CreativeQuickbarKey11");
    this->CreativeQuickbarKey12Name = TEXT("CreativeQuickbarKey12");
    this->TrapPickerName = TEXT("TrapPicker");
    this->ChangeMaterialName = TEXT("ChangeMaterial");
    this->BuildConfirmName = TEXT("BuildConfirm");
    this->PerformBuildingEditInteractionName = TEXT("PerformBuildingEditInteraction");
    this->PerformBuildingImprovementInteractionName = TEXT("PerformBuildingImprovementInteraction");
    this->PickerConfirmName = TEXT("PickerConfirm");
    this->PickerCancelName = TEXT("PickerCancel");
    this->EmotePickerName = TEXT("EmotePicker");
    this->SquadQuickChatPickerName = TEXT("SquadQuickChatPicker");
    this->SwitchQuickBarName = TEXT("SwitchQuickbar");
    this->UseName = TEXT("Use");
    this->UseOrReloadName = TEXT("UseOrReload");
    this->ReloadName = TEXT("Reload");
    this->InventoryOrChatHoldName = TEXT("InventoryOrChatHold");
    this->FireName = TEXT("Fire");
    this->TargetName = TEXT("Target");
    this->RotatePrimitiveClockwiseName = TEXT("RotatePrimitiveClockwise");
    this->ToggleFullScreenMapName = TEXT("ToggleFullScreenMap");
    this->GamepadToggleFullScreenMapName = TEXT("GamepadToggleFullScreenMap");
    this->GamepadToggleFullScreenMapWhileBuildingName = TEXT("GamepadToggleFullScreenMapWhileBuilding");
    this->GamepadToggleFullScreenMapWhileEditingName = TEXT("GamepadToggleFullScreenMapWhileEditing");
    this->ToggleInventoryName = TEXT("ToggleInventory");
    this->GamepadToggleInventoryName = TEXT("GamepadToggleInventory");
    this->GamepadToggleInventoryWhileBuildingName = TEXT("GamepadToggleInventoryWhileBuilding");
    this->GamepadToggleInventoryWhileEditingName = TEXT("GamepadToggleInventoryWhileEditing");
    this->JumpName = TEXT("Jump");
    this->GamepadJumpName = TEXT("GamepadJump");
    this->CrouchName = TEXT("Crouch");
    this->CrouchWhileBuildingName = TEXT("CrouchWhileBuilding");
    this->CrouchWhileEditingName = TEXT("CrouchWhileEditing");
    this->CrouchOrRepairName = TEXT("CrouchOrRepair");
    this->CrouchOrRepairWhileBuildingName = TEXT("CrouchOrRepairWhileBuilding");
    this->CrouchOrRepairWhileEditingName = TEXT("CrouchOrRepairWhileEditing");
    this->GamepadVehicleExitName = TEXT("GamepadVehicleExit");
    this->GamepadVehicleUseOrExitName = TEXT("GamepadVehicleUseOrExit");
    this->GamepadVehicleJumpName = TEXT("GamepadVehicleJump");
    this->VehicleExitName = TEXT("VehicleExit");
    this->VehicleUseOrExitName = TEXT("VehicleUseOrExit");
    this->ShoppingCartCoastName = TEXT("ShoppingCartCoast");
    this->CannonShootName = TEXT("CannonShoot");
    this->GamepadCannonShootName = TEXT("GamepadCannonShoot");
    this->CannonCoastName = TEXT("CannonCoast");
    this->GamepadCannonCoastName = TEXT("GamepadCannonCoast");
    this->VehicleJumpName = TEXT("VehicleJump");
    this->GolfCartEBrakeName = TEXT("GolfCartEBrake");
    this->GamepadGolfCartEBrakeLeftName = TEXT("GamepadGolfCartEBrakeLeft");
    this->GamepadGolfCartEBrakeRightName = TEXT("GamepadGolfCartEBrakeRight");
    this->VehicleChangeSeatName = TEXT("VehicleChangeSeat");
    this->GamepadGolfCartForwardName = TEXT("GamepadGolfCartForward");
    this->GamepadGolfCartReverseName = TEXT("GamepadGolfCartReverse");
    this->GolfCartHonkName = TEXT("VehicleHonk");
    this->QuadCrasherBoostName = TEXT("QuadCrasherBoost");
    this->GamepadQuadCrasherBoostLeftName = TEXT("GamepadQuadCrasherBoostLeft");
    this->GamepadQuadCrasherBoostRightName = TEXT("GamepadQuadCrasherBoostRight");
    this->GamepadQuadCrasherBoostExtraName = TEXT("GamepadQuadCrasherBoostExtra");
    this->JackalBoostName = TEXT("JackalBoost");
    this->GamepadJackalBoostLeftName = TEXT("GamepadJackalBoostLeft");
    this->GamepadJackalBoostRightName = TEXT("GamepadJackalBoostRight");
    this->JackalUseOrExitName = TEXT("JackalUseOrExit");
    this->GamepadJackalExitName = TEXT("GamepadJackalExit");
    this->GamepadJackalUseOrExitName = TEXT("GamepadJackalUseOrExit");
    this->HamsterballBoostName = TEXT("HamsterballBoost");
    this->HamsterballShootName = TEXT("HamsterballShoot");
    this->HamsterballExtendName = TEXT("HamsterballRetract");
    this->GamepadHamsterballBoostLeftName = TEXT("GamepadHamsterballBoostLeft");
    this->GamepadHamsterballBoostRightName = TEXT("GamepadHamsterballBoostRight");
    this->GamepadHamsterballShootName = TEXT("GamepadHamsterballShoot");
    this->GamepadHamsterballExtendName = TEXT("GamepadHamsterballRetract");
    this->BiplaneRollRightName = TEXT("BiplaneRollRight");
    this->BiplaneRollLeftName = TEXT("BiplaneRollLeft");
    this->BiplaneRollInvertName = TEXT("BiplaneRollInvert");
    this->BiplaneStartEngineName = TEXT("BiplaneStartEngine");
    this->BiplaneStopEngineName = TEXT("BiplaneStopEngine");
    this->BiplaneTaxiBackwardsName = TEXT("BiplaneTaxiBackwards");
    this->BiplaneBoostName = TEXT("BiplaneBoost");
    this->BiplaneShootName = TEXT("BiplaneShoot");
    this->BiplaneFreelookName = TEXT("BiplaneFreelook");
    this->GamepadBiplaneRollRightName = TEXT("GamepadBiplaneRollRight");
    this->GamepadBiplaneRollLeftName = TEXT("GamepadBiplaneRollLeft");
    this->GamepadBiplaneStartEngineName = TEXT("GamepadBiplaneStartEngine");
    this->GamepadBiplaneStopEngineName = TEXT("GamepadBiplaneStopEngine");
    this->GamepadBiplaneTaxiBackwardsName = TEXT("GamepadBiplaneTaxiBackwards");
    this->GamepadBiplaneBoostName = TEXT("GamepadBiplaneBoost");
    this->GamepadBiplaneShootName = TEXT("GamepadBiplaneShoot");
    this->TogglePickAxeName = TEXT("TogglePickAxe");
    this->ToggleCreativePhoneName = TEXT("ToggleCreativePhone");
    this->ToggleCreativeGlobalOptionsName = TEXT("ToggleCreativeGlobalOptions");
    this->GamepadEmotePickerOrReplayLastEmoteHoldName = TEXT("GamepadEmotePickerOrReplayLastEmoteHold");
    this->GamepadEmotePickerOrReplayLastEmoteHoldWhileBuildingName = TEXT("GamepadEmotePickerOrReplayLastEmoteHoldWhileBuilding");
    this->GamepadEmotePickerOrReplayLastEmoteHoldWhileEditingName = TEXT("GamepadEmotePickerOrReplayLastEmoteHoldWhileEditing");
    this->GamepadSwitchModeName = TEXT("GamepadSwitchMode");
    this->CreativeMoveToolEquippedGrabOrLetGoName = TEXT("CreativeMoveToolEquippedGrabOrLetGo");
    this->CreativeMoveToolEquippedCopyGrabOrDuplicateName = TEXT("CreativeMoveToolEquippedCopyGrabOrDuplicate");
    this->CreativeMoveToolEquippedDeleteName = TEXT("CreativeMoveToolEquippedDelete");
    this->CreativeToggleGhostName = TEXT("CreativeToggleGhost");
    this->CreativeMoveToolMultiSelectName = TEXT("CreativeMoveToolMultiSelect");
    this->CreativeMoveToolClearMultiSelectName = TEXT("CreativeMoveToolClearMultiSelect");
    this->CreativeMoveObjectsFreelyLetGoName = TEXT("CreativeMoveObjectsFreelyLetGo");
    this->CreativeMoveObjectsFreelyDuplicateName = TEXT("CreativeMoveObjectsFreelyDuplicate");
    this->CreativeMoveObjectsFreelyDropToFloorName = TEXT("CreativeMoveObjectsFreelyDropToFloor");
    this->CreativeMoveObjectsFreelyRotateClockwiseName = TEXT("CreativeMoveObjectsFreelyRotateClockwise");
    this->CreativeMoveObjectsFreelyRotateCounterclockwiseName = TEXT("CreativeMoveObjectsFreelyRotateCounterclockwise");
    this->CreativeMoveObjectsFreelySwitchAxisName = TEXT("CreativeMoveObjectsFreelySwitchAxis");
    this->CreativeMoveObjectsFreelyPushName = TEXT("CreativeMoveObjectsFreelyPush");
    this->CreativeMoveObjectsFreelyPullName = TEXT("CreativeMoveObjectsFreelyPull");
    this->CreativeMoveObjectsFreelyExitName = TEXT("CreativeMoveObjectsFreelyExit");
    this->CreativeMoveObjectsFreelyChangePrecisionLevelName = TEXT("CreativeMoveObjectsFreelyChangePrecisionLevel");
    this->CreativeMoveBuildingsOnGridLetGoName = TEXT("CreativeMoveBuildingsOnGridLetGo");
    this->CreativeMoveBuildingsOnGridDuplicateName = TEXT("CreativeMoveBuildingsOnGridDuplicate");
    this->CreativeMoveBuildingsOnGridRotateClockwiseName = TEXT("CreativeMoveBuildingsOnGridRotateClockwise");
    this->CreativeMoveBuildingsOnGridRotateCounterclockwiseName = TEXT("CreativeMoveBuildingsOnGridRotateCounterclockwise");
    this->CreativeMoveBuildingsOnGridMirrorName = TEXT("CreativeMoveBuildingsOnGridMirror");
    this->CreativeMoveBuildingsOnGridExitName = TEXT("CreativeMoveBuildingsOnGridExit");
    this->CreativeMoveBuildingsOnGridChangePrecisionLevelName = TEXT("CreativeMoveBuildingsOnGridChangePrecisionLevel");
    this->CreativeFlyUpName = TEXT("CreativeFlyUp");
    this->CreativeFlyDownName = TEXT("CreativeFlyDown");
    this->CreativeIslandPanelSupportAffiliateName = TEXT("CreativeIslandPanelSupportAffiliate");
    this->CreativeIslandPanelStartMinigameName = TEXT("CreativeIslandPanelStartMinigame");
    this->CreativeIslandPanelToggleDetailsName = TEXT("CreativeIslandPanelToggleDetails");
    this->InputOptionsList.AddDefaulted(135);
}

