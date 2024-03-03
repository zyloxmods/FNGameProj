#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortRewardNotificationSubWidget.h"
#include "OnExpeditionMcpErrorDelegateDelegate.h"
#include "FortRewardExpeditionWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpeditionMcpErrorDelegate OnMcpError;
    
    UFortRewardExpeditionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSucceeded, const TArray<FFortItemInstanceQuantityPair>& Rewards);
    
public:
    UFUNCTION(BlueprintCallable)
    void CollectExpedition(UFortExpeditionItem* Expedition);
    
};

