#pragma once
#include "CoreMinimal.h"
#include "EPlayEventType.h"
#include "FortActivatablePanel.h"
#include "AthenaReplayActionFeedScreenBase.generated.h"

class UAthenaReplayActionFeedRowProxyInstance;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayActionFeedScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaReplayActionFeedScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowProxiesUpdated(const TArray<UAthenaReplayActionFeedRowProxyInstance*>& RowProxies);
    
private:
    UFUNCTION()
    void OnReplayEventsUpdated(EPlayEventType Type);
    
};

