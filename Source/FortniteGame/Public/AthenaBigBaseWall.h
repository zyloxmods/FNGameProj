#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "EBarrierState.h"
#include "AthenaBigBaseWall.generated.h"

UCLASS(Blueprintable)
class AAthenaBigBaseWall : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WallGravity, meta=(AllowPrivateAccess=true))
    float WallGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeUntilWallComesDown, meta=(AllowPrivateAccess=true))
    float TimeUntilWallComesDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResetBool, meta=(AllowPrivateAccess=true))
    bool bResetBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarrierState, meta=(AllowPrivateAccess=true))
    EBarrierState BarrierState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZKillLevel;
    
public:
    AAthenaBigBaseWall();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WallStartingToComeDown(bool bIsOnBurgerSide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWallTime(float Digit_0, float Digit_1, float Digit_2, float Digit_3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOrHideTimer(bool bNewVisibleState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WallGravity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeUntilWallComesDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResetBool();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarrierState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewBarrierState(EBarrierState NewState);
    
};

