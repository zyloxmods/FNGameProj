#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayEliminationEventInfo.h"
#include "AthenaReplayActionFeedRowProxyInstance.generated.h"

UCLASS(Blueprintable)
class UAthenaReplayActionFeedRowProxyInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FReplayEliminationEventInfo RowData;
    
    UAthenaReplayActionFeedRowProxyInstance();
};

