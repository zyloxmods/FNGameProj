#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_MCPContextUpgradeItem.generated.h"

class UFortAsyncAction_MCPContextUpgradeItem;
class UFortItem;
class UFortMcpContext;

UCLASS(Blueprintable)
class UFortAsyncAction_MCPContextUpgradeItem : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMCPRequestComplete);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPRequestComplete OnMCPRequestComplete;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMcpContext> MCPContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToUpgrade;
    
public:
    UFortAsyncAction_MCPContextUpgradeItem();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_MCPContextUpgradeItem* UpgradeItem(const UFortMcpContext* NewMCPContext, const UFortItem* NewItemToUpgrade, int32 TargetLevel);
    
};

