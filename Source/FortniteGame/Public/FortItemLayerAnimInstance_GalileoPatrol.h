#pragma once
#include "CoreMinimal.h"
#include "FortItemLayerAnimInstance_FullLocomotion.h"
#include "FortItemLayerAnimInstance_GalileoPatrol.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortItemLayerAnimInstance_GalileoPatrol : public UFortItemLayerAnimInstance_FullLocomotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WalkAdditiveStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PatrolLocomotionStateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecentlyFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLandPatrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIdle_Walk_Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPatrolLocomotionCurrentTimeAboveThreshold;
    
    UFortItemLayerAnimInstance_GalileoPatrol();
};

