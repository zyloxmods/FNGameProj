#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrollingComponentOnStartPatrollingDelegate.h"
#include "PatrollingComponentOnStopPatrollingDelegate.h"
#include "FortAthenaNpcPatrollingComponent.generated.h"

class AFortAthenaAIBotController;
class AFortAthenaPatrolPath;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaNpcPatrollingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPropagatePatrollingProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* CachedBotController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrollingComponentOnStartPatrolling OnStartPatrollingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrollingComponentOnStopPatrolling OnStopPatrollingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaPatrolPath* PatrolPath;
    
public:
    UFortAthenaNpcPatrollingComponent();
    UFUNCTION(BlueprintCallable)
    void SetPatrolPath(const AFortAthenaPatrolPath* NewPatrolPath);
    
};

