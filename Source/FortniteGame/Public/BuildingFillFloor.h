#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "FillFloorPositionData.h"
#include "BuildingFillFloor.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class ABuildingFillFloor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZKillOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZMovementToleranceOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StepIndex, meta=(AllowPrivateAccess=true))
    int32 StepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FloorZ, meta=(AllowPrivateAccess=true))
    float FloorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFillFloorPositionData FloorPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStepsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EventHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovementTimerUpdatePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FloorMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
public:
    ABuildingFillFloor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMovement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopMoving(int32 CurrentStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMoving(int32 CurrentStep);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StepIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FloorZ();
    
    UFUNCTION(BlueprintCallable)
    void OnLavaOverlap(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeightEvent(float Height, int32 HeightEventIndex);
    
    UFUNCTION(BlueprintCallable)
    void InterpToStopCallback(const FHitResult& ImpactResult, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFloorPositionFromStep(int32 Step, float& MoveTime, float& Height, float& PostMoveDelay) const;
    
};

