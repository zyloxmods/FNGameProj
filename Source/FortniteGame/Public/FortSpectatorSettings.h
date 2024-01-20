#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EThirdPersonAutoFollowMode.h"
#include "NamedNameplatePreset.h"
#include "NameplatePreset.h"
#include "SpectatorCameraSettings.h"
#include "SpectatorLensSettings.h"
#include "FortSpectatorSettings.generated.h"

UCLASS(Blueprintable, Config=Spectator)
class UFortSpectatorSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedNameplatePreset> NameplatePresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameplatePreset NameplateSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorCameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorLensSettings LensSettings;
    
public:
    UFortSpectatorSettings();
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonDistanceToSubject(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonCameraCollision(bool bCollide);
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonAutoFollowMode(EThirdPersonAutoFollowMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStormEffectsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetShareLensSettings(bool bShare);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeZoneOpacity(float NewOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetRelevancyZoneVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerOutlinesEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesViewDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesScalingOptionsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesLowDetailScaleMin(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesLowDetailScaleMax(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesLowDetailDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesHighDetailScaleMin(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesHighDetailScaleMax(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesArrowScaleMin(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesArrowScaleMax(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesArrowDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetManualFocusDistance(float NewFocusDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetManualExposureBias(float NewManualExposureBias);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreJump(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetHighQualityFxEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalLength(float NewFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageFxEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoFocusEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoExposureEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAperture(float NewAperture);
    
    UFUNCTION(BlueprintCallable)
    void ResetNameplateSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetLensSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraSettingsToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxNameplateScale(float& MinScale, float& MaxScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxNameplateDistance(float& MinDistance, float& MaxDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLensMinMaxFocusDistance(float& MinFocusDistance, float& MaxFocusDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLensMinMaxFocalLength(float& MinFocalLength, float& MaxFocalLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLensMinMaxExposure(float& MinExposure, float& MaxExposure) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLensMinMaxAperture(float& MinAperture, float& MaxAperture) const;
    
};

