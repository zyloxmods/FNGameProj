#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortClientEventName.h"
#include "AsyncAction_WaitForScriptedActions.generated.h"

class AFortScriptedActionManager;
class UAsyncAction_WaitForScriptedActions;
class UObject;

UCLASS(Blueprintable)
class UAsyncAction_WaitForScriptedActions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedDelegate Finished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortScriptedActionManager* ActionManager;
    
public:
    UAsyncAction_WaitForScriptedActions();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_WaitForScriptedActions* WaitForScriptedAction(UObject* WorldContextObject, FFortClientEventName EventType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_WaitForScriptedActions* WaitForMultipleScriptedActions(UObject* WorldContextObject, TArray<FFortClientEventName> EventTypes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_WaitForScriptedActions* WaitForAllScriptedActions(UObject* WorldContextObject);
    
};

