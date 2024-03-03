#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Actions/PawnAction_Move.h"
#include "UObject/NoExportTypes.h"
#include "EPathObstacleAction.h"
#include "FortAITask_Move.h"
#include "MoveAIDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAbilityTask_MoveAI.generated.h"

class AActor;
class AFortPawn;
class UFortAbilityTask_MoveAI;
class UGameplayAbility;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class UFortAbilityTask_MoveAI : public UFortAITask_Move {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveAIDelegate OnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveAIDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveAIDelegate OnCancelled;
    
    UFortAbilityTask_MoveAI();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_MoveAI* CreateMoveAITask(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MoveActor, FVector MoveLocation, TEnumAsByte<EPawnActionMoveMode::Type> MoveMode, TEnumAsByte<EPathObstacleAction::Type> PathObstacleAction, bool bStopAtEnd, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bFinishOnPlayerCollision, bool bProjectGoalLocationOnNavMesh, float AcceptableRadius, TSubclassOf<AFortPawn> PushBumpedPawnClass, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bUseContinuousGoalTracking);
    
};

