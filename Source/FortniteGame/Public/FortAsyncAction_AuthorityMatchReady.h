#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AuthorityMatchReadyAsyncDelegateDelegate.h"
#include "FortAsyncAction_AuthorityMatchReady.generated.h"

class UFortAsyncAction_AuthorityMatchReady;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_AuthorityMatchReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthorityMatchReadyAsyncDelegate OnReady;
    
    UFortAsyncAction_AuthorityMatchReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_AuthorityMatchReady* MatchReadyAsync(UObject* WorldContextObject);
    
};

