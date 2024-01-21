#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "FillFloorPositionData.h"
#include "AthenaFillFloor.generated.h"

class AFortPlayerPawnAthena;

UCLASS(Blueprintable)
class AAthenaFillFloor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StepIndex, meta=(AllowPrivateAccess=true))
    int32 StepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FloorZ, meta=(AllowPrivateAccess=true))
    float FloorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFillFloorPositionData> FloorPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EventHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovementTimerUpdatePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FloorMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
public:
    AAthenaFillFloor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopMovement(const FHitResult& ImpactResult, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMoving();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StepIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FloorZ();
    
    UFUNCTION(BlueprintCallable)
    void OnLavaOverlap(AFortPlayerPawnAthena* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeightEvent(float Height, int32 HeightEventIndex);
    
};

