#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EFortUIState.h"
#include "SetUIStateDelegateDelegate.h"
#include "FortAsyncAction_SetUIState.generated.h"

class UFortAsyncAction_SetUIState;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetUIStateDelegate OnStateEntered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UFortAsyncAction_SetUIState();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_SetUIState* SetUIState(UObject* InWorldContextObject, EFortUIState DesiredState);
    
};

