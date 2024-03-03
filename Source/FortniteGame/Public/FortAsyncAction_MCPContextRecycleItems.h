#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_MCPContextRecycleItems.generated.h"

class UFortAsyncAction_MCPContextRecycleItems;
class UFortItem;
class UFortMcpContext;

UCLASS(Blueprintable)
class UFortAsyncAction_MCPContextRecycleItems : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMCPRequestComplete);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPRequestComplete OnMCPRequestComplete;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMcpContext> MCPContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortItem>> ItemsToRecycle;
    
public:
    UFortAsyncAction_MCPContextRecycleItems();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_MCPContextRecycleItems* RecycleItems(const UFortMcpContext* NewMCPContext, const TArray<UFortItem*>& NewItemsToRecycle);
    
};

