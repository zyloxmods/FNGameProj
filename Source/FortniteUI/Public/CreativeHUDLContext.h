#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EHitTraceRule.h"
#include "EScaleAxis.h"
#include "OnCreativeGhostChangedDelegate.h"
#include "OnCreativeModeEnabledChangedDelegate.h"
#include "OnCreativeQuickbarEnabledChangedDelegate.h"
#include "OnCreativeQuickbarSlotContentChangedDelegate.h"
#include "OnMoveToolDropToFloorChangedDelegate.h"
#include "OnMoveToolLineOfSightBlockingChangedDelegate.h"
#include "OnMoveToolPrecisionChangedDelegate.h"
#include "OnMoveToolRotationAxisChangedDelegate.h"
#include "OnMoveToolScaleAxisChangedDelegate.h"
#include "OnMoveToolEquippedChangedDelegate.h"
#include "CreativeHUDLContext.generated.h"

class AFortCreativeMoveTool;
class AFortPlayerPawn;
class AFortWeapon;

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
    FOnMoveToolDropToFloorChanged OnDropToFloorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolPrecisionChanged OnPrecisionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolLineOfSightBlockingChanged OnMoveToolLineOfSightBlockingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveToolEquippedChanged OnMoveToolEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEnabledChanged OnCreativeQuickbarEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarSlotContentChanged OnCreativeQuickbarSlotContentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeModeEnabledChanged OnCreativeModeEnabledChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCreativeMoveTool* CurrentMoveTool;
    
public:
    UCreativeHUDLContext();
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScaleAxis GetScaleAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPrecisionLevel(bool& SnappingEnabled, uint8& GridSnappingIndex) const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDropToFloorEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHitTraceRule GetCurrentHitTraceRule() const;
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnScaleAxisChanged(EScaleAxis Axis);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnRotationAxisChanged(uint8 AxisIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnPrecisionChanged(bool bPrecisionOn, uint8 GridSnapIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnLOSChanged(EHitTraceRule HitTraceRule);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnDropToFloorChanged(bool bDropToFloorOn);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickbarSlotContentChanged(int32 SlotIndex, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeQuickbarEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeModeEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnCreativeGhostChanged(bool bIsGhostEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCreativeQuickbarSlotHaveContent(int32 SlotIndex) const;
    
};

