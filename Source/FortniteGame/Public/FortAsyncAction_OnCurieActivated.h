#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnCurieActivated_BPDelegate.h"
#include "FortAsyncAction_OnCurieActivated.generated.h"

class UFortAsyncAction_OnCurieActivated;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_OnCurieActivated : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurieActivated_BP OnCurieActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* ContextObject;
    
public:
    UFortAsyncAction_OnCurieActivated();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_OnCurieActivated* OnCurieActivated(UObject* ContextObj);
    
};

