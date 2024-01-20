#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ReplayEliminationEventInfo.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaReplayActionFeedRowBase.generated.h"

class UAthenaReplayActionFeedRowProxyInstance;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayActionFeedRowBase : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaReplayActionFeedRowProxyInstance* RowProxy;
    
public:
    UAthenaReplayActionFeedRowBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowDataSet(const FReplayEliminationEventInfo& RowData);
    
    
    // Fix for true pure virtual functions not being implemented
};

