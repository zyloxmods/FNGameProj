#pragma once
#include "CoreMinimal.h"
#include "FortReplayViewSettingsTabBase.h"
#include "FortSpectatorLensSettingsTab.generated.h"

class UCommonUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSpectatorLensSettingsTab : public UFortReplayViewSettingsTabBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* Rotator_AutoExposure;
    
public:
    UFortSpectatorLensSettingsTab();
protected:
    UFUNCTION(BlueprintCallable)
    void SetManualFocusDistance(float ManualFocusDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetManualExposureBias(float ManualExposureBias);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalLengthFromIdx(int32 FocalLengthIdx);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoFocusEnabled(bool bAutoFocusEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoExposureEnabled(bool bAutoExposureEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetApertureFromIdx(int32 ApertureIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManualFocusDistanceChanged(float ManualFocusDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManualExposureBiasChanged(float ManualExposureBias);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocalLengthChanged(const TArray<FText>& FocalLengthTexts, int32 PresetFocalLengthIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutoFocusEnabledChanged(bool bAutoFocusEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutoExposureEnabledChanged(bool bAutoExposureEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApertureChanged(int32 PresetApertureIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPresetApertureTexts(TArray<FText>& PresetApertureTexts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxFocusDistance(float& MinFocusDistance, float& MaxFocusDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxExposure(float& MinExposure, float& MaxExposure) const;
    
};

