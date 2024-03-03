#pragma once
#include "CoreMinimal.h"
#include "EThirdPersonAutoFollowMode.h"
#include "FortReplayViewSettingsTabBase.h"
#include "FortSpectatorCameraSettingsTab.generated.h"

class UCommonUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSpectatorCameraSettingsTab : public UFortReplayViewSettingsTabBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* Rotator_PlayerOutlines;
    
public:
    UFortSpectatorCameraSettingsTab();
protected:
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonDistanceToSubject(float ThirdPersonDistanceToSubject);
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonCameraCollision(bool bThirdPersonCameraCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonAutoFollowMode(EThirdPersonAutoFollowMode ThirdPersonAutoFollowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStormEffectsEnabled(bool bStormEffectsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShareLensSettings(bool bShareLensSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionIdWatermark(bool bShowSessionIDWatermark);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeZoneOpacity(float SafeZoneOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetRelevancyZoneVisible(bool bRelevancyZoneVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerOutlinesEnabled(bool bPlayerOutlinesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHighQualityFxEnabled(bool bHighQualityFxEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDroneIgnoreJump(bool bDroneIgnoreJump);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageFxEnabled(bool bDamageFxEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapShowTimeIndicator(bool bBattleMapShowTimeIndicator);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapShowNearbyChests(bool bBattleMapShowNearbyChests);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapShowAllSquadMembers(bool bBattleMapShowAllSquadMembers);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapAutomaticCameraPlacement(bool bBattleMapAutomaticCameraPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThirdPersonDistanceToSubjectChanged(float ThirdPersonDistanceToSubject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThirdPersonCameraCollisionChanged(bool bThirdPersonCameraCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThirdPersonAutoFollowModeChanged(EThirdPersonAutoFollowMode ThirdPersonAutoFollowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStormEffectsEnabledChanged(bool bStormEffectsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShareLensSettingsChanged(bool bShareLensSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionIDWatermarkChanged(bool bShowSessionIDWatermark);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSafeZoneOpacityChanged(float SafeZoneOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelevancyZoneVisibleChanged(bool bRelevancyZoneVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerOutlinesEnabledChanged(bool bPlayerOutlinesEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighQualityFxEnabledChanged(bool bHighQualityFxEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneIgnoreJumpChanged(bool bDroneIgnoreJump);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageFxEnabledChanged(bool bDamageFxEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleMapShowTimeIndicatorChanged(bool bBattleMapShowTimeIndicator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleMapShowNearbyChestsChanged(bool bBattleMapShowNearbyChests);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleMapShowAllSquadMembersChanged(bool bBattleMapShowAllSquadMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleMapAutomaticCameraPlacementChanged(bool bInBattleMapAutomaticCameraPlacement);
    
};

