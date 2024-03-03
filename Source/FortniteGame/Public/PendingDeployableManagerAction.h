#pragma once
#include "CoreMinimal.h"
#include "EDeployableBaseBuildingState.h"
#include "EQueueActionType.h"
#include "PendingDeployableManagerAction.generated.h"

class ADeployableBasePlot;
class AFortDeployableBaseManager;

USTRUCT(BlueprintType)
struct FPendingDeployableManagerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueueActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADeployableBasePlot*> PendingPlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlotRunningIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeployableBaseBuildingState DesiredPlotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDeployableBaseManager* Manager;
    
public:
    FORTNITEGAME_API FPendingDeployableManagerAction();
};

