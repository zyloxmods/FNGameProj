#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EFortAllowBackgroundAudioSetting.h"
#include "ESettingTab.h"
#include "ESettingType.h"
#include "WindowModeChangedDelegate.h"
#include "FortSettingsContext.generated.h"

class UFortOptionsMenuData;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortSettingsContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowModeChanged WindowModeHasChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortOptionsMenuData* OptionsMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortOptionsMenuData* CreativeOptionsMenuData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGammaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGammaValue;
    
    UFortSettingsContext();
private:
    UFUNCTION(BlueprintCallable)
    void YawInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawForMotionInversionReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void YawForMotionInversionChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void WindowModeChanged(int32 NewMode);
    
    UFUNCTION(BlueprintCallable)
    void ViewDistanceQualityChanged(int32 ButtonId);
    
    UFUNCTION(BlueprintCallable)
    void UseVsyncChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateGammaSettings(float GammaValue) const;
    
    UFUNCTION(BlueprintCallable)
    void TouchVerticalSensitivityValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchTargetingMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchLookSensitivityChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void TouchDragScopedSensitivityValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ThreeDResolutionChanged(float Resolution);
    
    UFUNCTION(BlueprintCallable)
    void TextureQualityChanged(int32 ButtonId);
    
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
    
public:
    UFUNCTION(BlueprintCallable)
    void SliderSettingReset(ESettingType InSettingType, FText NameText, float PreviousValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SliderSettingChanged(ESettingType InSettingType, FText NameText, float PreviousValue, float NewValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowViewerCountChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void ShowGrassChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void ShowFPSChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void ShadowQualityChanged(int32 ButtonId);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatPTTEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatOutputDevice(int32 NewDevice);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatInputDevice(int32 NewDevice);
    
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
    void SetColorBlindStrength(float InColorBlindStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoJoinGameVoiceChannel(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGameVolumeWhenMinimized(EFortAllowBackgroundAudioSetting NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendSettingChanges();
    
private:
    UFUNCTION(BlueprintCallable)
    void ScopedMultiplierValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SafeZoneChanged(float NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotatorSettingReset(ESettingType InSettingType, FText NameText, int32 PreviousValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RotatorSettingChanged(ESettingType InSettingType, FText NameText, int32 PreviousValue, int32 NewValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResolutionChanged(int32 NewResolution);
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadMoveStickDeadZone();
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadLookStickDeadZone();
    
    UFUNCTION(BlueprintCallable)
    void RegionReset();
    
    UFUNCTION(BlueprintCallable)
    void RegionChanged(int32 NewRegion);
    
    UFUNCTION(BlueprintCallable)
    void PowerSaverModeChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessQualityChanged(int32 ButtonId);
    
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
    void OnUseTapToShootChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnTurboBuildReset(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnTurboBuildChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnShowGlobalChatEnabledChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnShadowPlayHighlightsChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnReplayRecordingPreferenceChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnQualitySelectorReset();
    
    UFUNCTION(BlueprintCallable)
    void OnQualitySelectorChanged(int32 ValueRef);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaceDangerMarkerWhenTargetingChanged(bool bInChecked);
    
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
    void MotionBlurChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void MotionAxisValueChanged(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MobileFPSModeChanged(int32 FPSMode);
    
    UFUNCTION(BlueprintCallable)
    void LanguageReset();
    
    UFUNCTION(BlueprintCallable)
    void LanguageChanged(int32 NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is60FPSSupportedForCurrentScalability() const;
    
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
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetWindowModeNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatPTTEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetVoiceChatOutputDevice();
    
    UFUNCTION(BlueprintCallable)
    int32 GetVoiceChatInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChat3DEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisualizeAudioSources() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetViewDistanceNames();
    
    UFUNCTION(BlueprintCallable)
    bool GetUseVsync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseTapToShoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTurboBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchVerticalSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchTargetingMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchLookSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchDragScopedSensitivityValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetThreeDResolution();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTextureQuality();
    
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
    
public:
    UFUNCTION(BlueprintCallable)
    float GetSliderSettingValue(ESettingType InSettingType);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowVoiceIndicators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowViewerCountEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowHeroHeadAccessories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowHeroBackpack() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowGrass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowGlobalChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowFPS();
    
    UFUNCTION(BlueprintCallable)
    int32 GetShadowQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShadowPlayHighlightsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingValueInRange(float Value, ESettingType InSettingType, ESettingTab InSettingTab);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetSettingDisplayNames(ESettingType InSettingType);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScopedMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSafeZoneValue();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetRotatorSettingValue(ESettingType InSettingType);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetRegionDisplayNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetQualityOffNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetQualityNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetQualityLowNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPowerSaverMode() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPostProcessQuality();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetPossibleLanguages();
    
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
    
    UFUNCTION(BlueprintCallable)
    int32 GetOverallQualityLevel();
    
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
    
    UFUNCTION(BlueprintCallable)
    bool GetMotionBlur();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotionAxisValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMotionAxisNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMobileFPSTypeNames();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMobileFPSMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxQualityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockPrimaryInputMethodToMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLargeTeamsReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIgnoreGamepadInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDScale() const;
    
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
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetFPSNames();
    
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
    
    UFUNCTION(BlueprintCallable)
    int32 GetEffectsQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEditModeAimAssistState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEditButtonHoldTimeValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetDisplayResolutionNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogVolumeValue() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentRegion();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLanguage();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFPS();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentDisplayResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrossplayPreference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreativeTurboDelete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreativeModeReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConsoleUnlockedFPSState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetColorBlindModeNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCinematicsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChatVolumeValue() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAvailableVoiceChatOutputDevices();
    
    UFUNCTION(BlueprintCallable)
    void GetAvailableVoiceChatInputDevices();
    
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
    
    UFUNCTION(BlueprintCallable)
    int32 GetAntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnonymousModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnonymousCharacterModeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowVideoPlayback();
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowMultithreadedRendering();
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowLowPower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortAllowBackgroundAudioSetting GetAllowGameVolumeWhenMinimized() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowDynamicResolution();
    
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
    void FrameRateLimitChanged(int32 FrameRateLimit);
    
    UFUNCTION(BlueprintCallable)
    void FirstPersonCameraChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void EffectsQualityChanged(int32 ButtonId);
    
    UFUNCTION(BlueprintCallable)
    void DialogVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ConsoleUnlockedFPSChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void CinematicsVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ChatVolumeChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void AutoEquipChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void AntiAliasingQualityChanged(int32 ButtonId);
    
    UFUNCTION(BlueprintCallable)
    void AnonymousModeChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void AnonymousCharacterModeChanged(bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void AllowVideoPlaybackChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void AllowMultithreadedRenderingChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void AllowLowPowerChanged(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void AllowDynamicResolutionChanged(bool IsChecked);
    
};

