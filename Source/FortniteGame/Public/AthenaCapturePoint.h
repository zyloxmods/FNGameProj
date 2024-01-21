#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "BuildingGameplayActor.h"
#include "ECapturePointState.h"
#include "ECapturePointUnlockRules.h"
#include "EContentionRuleType.h"
#include "EFortTeam.h"
#include "OnCaptureLockBrokenDelegate.h"
#include "OnCaptureLockDelegate.h"
#include "OnCaptureStateChangedDelegate.h"
#include "OnTeamOwningCapturePointChangedDelegate.h"
#include "AthenaCapturePoint.generated.h"

class AActor;
class AFortPlayerPawnAthena;
class AFortTeamInfoAthena;
class UBoxComponent;
class UFortSlateHUDIndicator;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class AAthenaCapturePoint : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HUDIndicatorMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IndicatorBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CompassIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IconMaterialIndexParameter, meta=(AllowPrivateAccess=true))
    int32 IconMaterialIndexParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPermanentShutdown, meta=(AllowPrivateAccess=true))
    bool bPermanentShutdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShutdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSlateHUDIndicator* HUDIndicatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrHUDIndicatorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CapturePointMID_Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CapturePointMID_AllyCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CapturePointMID_AllyCapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CapturePointMID_EnemyCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CapturePointMID_EnemyCapping;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHUDIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HUDStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HUDOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHUDClampToScreenEdge: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinHUDIndicatorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxHUDIndicatorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForMinHUDSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CapturePointMat_Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CapturePointMat_AllyCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CapturePointMat_AllyCapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CapturePointMat_EnemyCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CapturePointMat_EnemyCapping;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* StructuralComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> OverlappedAthenaPawns;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bActivated, meta=(AllowPrivateAccess=true))
    uint8 bActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentionRuleType ContentionRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortTeam::Type>> TeamsBarredFromCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsPerPlayerCapturing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentIncreasePerPlayerCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BonusPercentIncreasePerPlayerCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalableFloat> CaptureSpeedPerPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentDecreaseNoCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedPercentIncreasePerPlayerCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedBonusPercentIncreasePerPlayerCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedPercentDecreaseNoCaptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> CachedCaptureSpeedPerPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bLocked, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECapturePointUnlockRules UnlockRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumCapturingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamCapturingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamControllingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfoAthena* TeamInfoControllingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamOwningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CaptureState, meta=(AllowPrivateAccess=true))
    ECapturePointState CaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CapturePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedCapturePercentage, meta=(AllowPrivateAccess=true))
    float ReplicatedCapturePercentage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureStateChanged OnCapturePointStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamOwningCapturePointChanged OnTeamOwningPointChanges;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureLock OnCaptureLockEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureLockBroken OnCaptureLockBrokenEvent;
    
    AAthenaCapturePoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetActivatedState(bool bInActivated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedCapturePercentage();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IconMaterialIndexParameter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bPermanentShutdown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bLocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCapturePointStateChange(ECapturePointState InState, uint8 InTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCapturePointLockStateChange(bool bInLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCapturePointActiveStateChange(bool bInActive);
    
    UFUNCTION(BlueprintCallable)
    bool HasDancingPlayer();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumDancingPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECapturePointState GetCaptureState() const;
    
};

