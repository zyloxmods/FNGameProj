#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "EFortTouchControlRegion.h"
#include "FortTouchControlRegion.generated.h"

class UCurveFloat;
class UFortAutorunLockZone;
class UFortTouchLookStick;
class UFortTouchMoveStick;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortTouchControlRegion : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AutorunLockDelayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTouchMoveStick* RegisteredTouchMoveStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTouchLookStick* RegisteredTouchLookStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAutorunLockZone* RegisteredAutoRunLockTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastMovePlayerRegionTouchOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovePlayerRegionTouchEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLastLookTouchWasTap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLockedOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveStickLastTouchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovePlayerRegionLastTouchPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotateCameraRegionLastTouchPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotateCameraPlayerRegionLastTouchDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateCameraLastTouchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotateInertiaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotateStickPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LockOnStickOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LockOnStickCurrentPos;
    
public:
    UFortTouchControlRegion();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLockOnStickPosition(FVector2D LocalPos);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLockOnStickOrigin(FVector2D LocalPos, bool IsTouchStartEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveStickPos(FVector2D NewMoveStickPos);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnStickPosition(FVector2D LocalPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFeedbackPosition(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RotatePlayerRegionTick(const FGeometry& InGeometry, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetTouchState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotatePlayerRegionTouchStarted(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotatePlayerRegionTouchMoved(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent, const FVector2D& MoveDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotatePlayerRegionTouchLost(int32 PointerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotatePlayerRegionTouchEnded(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegionTouchStarted(const EFortTouchControlRegion Region, const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegionTouchMoved(const EFortTouchControlRegion Region, const FGeometry& InGeometry, const FPointerEvent& InGestureEvent, const FVector2D& MoveDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegionTouchEnded(const EFortTouchControlRegion Region, const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovePlayerRegionTouchStarted(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovePlayerRegionTouchMoved(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovePlayerRegionTouchLost(int32 PointerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovePlayerRegionTouchEnded(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildModeChanged(bool bBuildModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAdditionalTouchStarted(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAdditionalTouchLost(int32 PointerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAdditionalTouchEnded(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovePlayerRegionTick(const FGeometry& InGeometry, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTouchStickRange() const;
    
};

