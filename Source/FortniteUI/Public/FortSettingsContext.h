#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EFortAllowBackgroundAudioSetting.h"
#include "ESettingTab.h"
#include "ESettingType.h"
#include "FortSettingsContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortSettingsContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGammaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGammaValue;
    
    UFortSettingsContext();
    UFUNCTION(BlueprintCallable)
    void YawInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawForMotionInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawForMotionInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateGammaSettings(float GammaValue) const;
    
    UFUNCTION(BlueprintCallable)
    void TouchVerticalSensitivityValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchTargetingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchLookSensitivityChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchLookAccelerationMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchEditModeMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchDragScopedSensitivityValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchBuildingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TargetingToggleChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void TargetingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TapInteractChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SprintToggleChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SprintCancelsReloadChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SprintByDefaultChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SoundFXVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SliderSettingReset(ESettingType InSettingType, FText NameText, float PreviousValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SliderSettingChanged(ESettingType InSettingType, FText NameText, float PreviousValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ShowViewerCountChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void ShowTemperatureChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatPTTEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChat3DEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualizeAudioSources(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowVoiceIndicators(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetQuality(int32 NewQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetLockPrimaryInputMethodToMouse(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreGamepadInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRudderControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindStrength(int32 InColorBlindStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoJoinGameVoiceChannel(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGameVolumeWhenMinimized(EFortAllowBackgroundAudioSetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ScopedMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SafeZoneChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RudderMaxThrottleChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RudderDeadZoneChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RotatorSettingReset(ESettingType InSettingType, FText NameText, int32 PreviousValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RotatorSettingChanged(ESettingType InSettingType, FText NameText, int32 PreviousValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadMoveStickDeadZone();
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadLookStickDeadZone();
    
    UFUNCTION(BlueprintCallable)
    void PowerSaverModeChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForMotionInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForMotionInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForAircraftSecondaryInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForAircraftSecondaryInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForAircraftPrimaryInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PitchForAircraftPrimaryInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PeripheralLightingChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnTurboBuildReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnTurboBuildChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnTouchEditChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnShowGlobalChatEnabledChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnShadowPlayHighlightsChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnReplayRecordingPreferenceChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickEditChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSurveysAllowedChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaceDangerMarkerWhenTargetingChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalNotificationsChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnLargeTeamsReplayRecordingPreferenceChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDScaleChanged(float bInHUDScale);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadAutoRunChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnForceFeedbackChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnEnableTryBuildOnFocusChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnEditModeAimAssistChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnEditConfirmOnReleaseChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnEditButtonHoldTimeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnCrossplayPreferenceChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeTurboDeleteReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeTurboDeleteChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeModeReplayRecordingPreferenceChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnContextTutorialChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingPossessionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoSortConsumablesToRightChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoPickupWeaponsConsolePCChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoPickupWeaponsChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoOpenDoorsChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoChangeMaterialReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoChangeMaterialChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAimAssistReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnAimAssistChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUsersWhenPlayingChanged(bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void MusicVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MouseSensitivityYChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MouseSensitivityXChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MouseSensitivityMultiplierForAircraftChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MotionTargetingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MotionScopedMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MotionHarvestingToolMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MotionControlEnabledValueChanged(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MotionAxisValueChanged(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void InWorldInteractChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void HoldToSwapPickupChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void HideOtherPlayerNamesChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void HiddenMatchmakingDelayMaxReset();
    
    UFUNCTION(BlueprintCallable)
    void HiddenMatchmakingDelayMaxChanged(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void GyroSensitivityValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetYawInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetYawForMotionInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatPTTEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChat3DEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisualizeAudioSources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTurboBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchVerticalSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchTargetingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchLookSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchLookAccelerationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTouchEditState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchEditModeMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchDragScopedSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchBuildingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetingToggleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTapInteractState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprintToggleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprintCancelsReloadState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprintByDefaultState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundFXVolumeValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSliderSettingValue(ESettingType InSettingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowVoiceIndicators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowViewerCountEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowTemperature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowGlobalChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShadowPlayHighlightsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingValueInRange(float Value, ESettingType InSettingType, ESettingTab InSettingTab);
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetSettingDisplayNames(ESettingType InSettingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScopedMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSafeZoneValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRudderMaxThrottle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRudderDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRotatorSettingValue(ESettingType InSettingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQuickEditState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPowerSaverMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerSurveysAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaceDangerMarkerWhenTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPitchInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPitchForMotionInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPitchForAircraftSecondaryInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPitchForAircraftPrimaryInversionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPeripheralLightingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNotifyUsersWhenPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolumeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMouseSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityMultiplierForAircraft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionTargetingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionScopedMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionHarvestingToolMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMotionControlsEnabledValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotionAxisValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMotionAxisNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockPrimaryInputMethodToMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalNotificationsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLargeTeamsReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInWorldInteractState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIgnoreGamepadInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDScaleRaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldToSwapPickupState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideOtherPlayerNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHiddenMatchmakingDelayMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGyroSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadTargetingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadScopedMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadMoveStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadLookStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGamepadLookSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadEditModeMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadBuildingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamepadAutoRunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceFeedbackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFirstPersonCameraState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableTryBuildOnFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableRudderControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEditModeAimAssistState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEditConfirmOnReleaseState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEditButtonHoldTimeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogVolumeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrossplayPreference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreativeTurboDelete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreativeModeReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContextTutorialState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetColorBlindModeNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCinematicsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChatVolumeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuildingPossessionShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoSortConsumablesToRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoPickupWeaponsConsolePC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoPickupWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoOpenDoors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoJoinGameVoiceChannel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoEquipState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoChangeMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnonymousModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnonymousCharacterModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortAllowBackgroundAudioSetting GetAllowGameVolumeWhenMinimized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAimAssistState() const;
    
    UFUNCTION(BlueprintCallable)
    void GamepadTargetingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void GamepadScopedMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GamepadMoveStickDeadZoneChanged(const float NewValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GamepadLookStickDeadZoneChanged(const float NewValue) const;
    
    UFUNCTION(BlueprintCallable)
    void GamepadLookSensitivityYChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void GamepadLookSensitivityXChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void GamepadEditModeMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void GamepadBuildingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void FirstPersonCameraChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void DialogVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void CinematicsVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ChatVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void AutoEquipChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void AnonymousModeChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void AnonymousCharacterModeChanged(bool bInChecked);
    
};

