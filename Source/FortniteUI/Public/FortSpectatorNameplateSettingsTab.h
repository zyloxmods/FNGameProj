#pragma once
#include "CoreMinimal.h"
#include "ESpectatorSquadIdMode.h"
#include "FortReplayViewSettingsTabBase.h"
#include "FortSpectatorNameplateSettingsTab.generated.h"

class UCommonUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSpectatorNameplateSettingsTab : public UFortReplayViewSettingsTabBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* Rotator_NameplatesEnabled;
    
public:
    UFortSpectatorNameplateSettingsTab();
protected:
    UFUNCTION(BlueprintCallable)
    void SetViewDistance(float ViewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadIdMode(ESpectatorSquadIdMode SquadIdMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShowTeamColor(bool bShowTeamColor);
    
    UFUNCTION(BlueprintCallable)
    void SetScalingOptionsEnabled(bool bScalingOptionsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNameplatesEnabled(bool bNamePlatesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLowDetailScaleMin(float LowDetailScaleMin);
    
    UFUNCTION(BlueprintCallable)
    void SetLowDetailScaleMax(float LowDetailScaleMax);
    
    UFUNCTION(BlueprintCallable)
    void SetLowDetailDistance(float LowDetailDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetHighDetailScaleMin(float HighDetailScaleMin);
    
    UFUNCTION(BlueprintCallable)
    void SetHighDetailScaleMax(float HighDetailScaleMax);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowScaleMin(float ArrowScaleMin);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowScaleMax(float ArrowScaleMax);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowDistance(float ArrowDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowColorEnabled(bool bArrowColorEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewDistanceChanged(float ViewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdModeChanged(ESpectatorSquadIdMode SquadIdMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTeamColorChanged(bool bShowTeamColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScalingOptionsEnabledChanged(bool bScalingOptionsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNameplatesEnabledChanged(bool bNamePlatesEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLowDetailScaleMinChanged(float LowDetailScaleMin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLowDetailScaleMaxChanged(float LowDetailScaleMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLowDetailDistanceChanged(float LowDetailDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighDetailScaleMinChanged(float HighDetailScaleMin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighDetailScaleMaxChanged(float HighDetailScaleMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowScaleMinChanged(float ArrowScaleMin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowScaleMaxChanged(float ArrowScaleMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowDistanceChanged(float ArrowDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowColorEnabledChanged(bool bArrowColorEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScalingOptionsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNameplatesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxNameplateScale(float& MinScale, float& MaxScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinMaxNameplateDistance(float& MinDistance, float& MaxDistance) const;
    
};

