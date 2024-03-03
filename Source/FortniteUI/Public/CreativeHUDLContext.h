#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHitTraceRule.h"
#include "EScaleAxis.h"
#include "OnCreativeGhostChangedDelegate.h"
#include "OnCreativeHeatmapToggledDelegate.h"
#include "OnCreativeModeEnabledChangedDelegate.h"
#include "OnCreativeQuickbarActiveChangedDelegate.h"
#include "OnCreativeQuickbarEnabledChangedDelegate.h"
#include "OnCreativeQuickbarEquippedChangedDelegate.h"
#include "OnMoveToolDropToFloorChangedDelegate.h"
#include "OnMoveToolLineOfSightBlockingChangedDelegate.h"
#include "OnMoveToolPrecisionChangedDelegate.h"
#include "OnMoveToolRotationAxisChangedDelegate.h"
#include "OnMoveToolRotationModifiedDelegate.h"
#include "OnMoveToolScaleAxisChangedDelegate.h"
#include "OnMoveToolScaleModifiedDelegate.h"
#include "OnCreativeQuickMenuDisplayedChangedDelegate.h"
#include "OnGenericBooleanStateChangedEventDelegate.h"
#include "OnGenericCountDownEventDelegate.h"
#include "OnMoveToolEquippedChangedDelegate.h"
#include "CreativeHUDLContext.generated.h"

class AFortCreativeMoveTool;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortWeapon;
class UDataTable;

UCLASS(Blueprintable, NonTransient)
class UCreativeHUDLContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolRotationAxisChanged OnRotationAxisChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolScaleAxisChanged OnScaleAxisChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeGhostChanged OnCreativeGhostChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeHeatmapToggled OnCreativeHeatmapToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolDropToFloorChanged OnDropToFloorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolPrecisionChanged OnPrecisionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolLineOfSightBlockingChanged OnMoveToolLineOfSightBlockingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolEquippedChanged OnMoveToolEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolScaleModified OnMoveToolScaleModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickMenuDisplayedChanged OnCreativeQuickMenuDisplayedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolRotationModified OnMoveToolRotationModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEnabledChanged OnCreativeQuickbarEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeModeEnabledChanged OnCreativeModeEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarActiveChanged OnCreativeQuickbarActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEquippedChanged OnCreativeQuickbarEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenericCountDownEvent OnPropPlaySoundCountdownChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenericBooleanStateChangedEvent OnPropLockInPlaceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCreativeMoveTool* CurrentMoveTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPropLockedInPlace;
    
public:
    UCreativeHUDLContext();
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerSet();
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeQuickbarComponentLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPropLockedInPlace() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCreativeModeEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScaleAxis GetScaleAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPrecisionLevel(bool& SnappingEnabled, uint8& GridSnappingIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* GetOwningPlayerState() const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDropToFloorEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHitTraceRule GetCurrentHitTraceRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCreativeItemListSourceFromPlaylist() const;
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnScaleAxisChanged(EScaleAxis Axis);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnRotationAxisChanged(uint8 AxisIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnPropLockedInPlacedChanged(bool bLockedInPlace);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnPrecisionChanged(bool bPrecisionOn, uint8 GridSnapIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnMoveToolScaleModified(FVector currentVector);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnMoveToolRotationModified(FQuat currentRotationOffset);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnLOSChanged(EHitTraceRule HitTraceRule);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnDropToFloorChanged(bool bDropToFloorOn);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickMenuDisplayedChanged(bool bIsDisplayed);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickbarEquippedChanged(bool bIsEquipped);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickbarEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickbarActiveChanged(bool bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeHeatmapTogged(bool bIsHeatmapToggled);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeGhostChanged(bool bIsGhostEnabled);
    
};

