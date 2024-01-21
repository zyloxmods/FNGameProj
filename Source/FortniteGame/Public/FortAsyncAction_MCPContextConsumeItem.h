#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortAsyncAction_MCPContextConsumeItem.generated.h"

class UFortAsyncAction_MCPContextConsumeItem;
class UFortItem;
class UFortMcpContext;

UCLASS(Blueprintable)
class UFortAsyncAction_MCPContextConsumeItem : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMCPRequestComplete);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPRequestComplete OnMCPRequestComplete;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMcpContext> MCPContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl TargetAccountId;
    
public:
    UFortAsyncAction_MCPContextConsumeItem();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_MCPContextConsumeItem* ConsumeItem(const UFortMcpContext* NewMCPContext, const UFortItem* NewItemToConsume, const FUniqueNetIdRepl& NewTargetAccountId);
    
};

