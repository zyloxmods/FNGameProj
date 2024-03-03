#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_InitialCalendarSyncCompleted.generated.h"

class UFortAsyncAction_InitialCalendarSyncCompleted;
class UFortGameInstance;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_InitialCalendarSyncCompleted : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitialCalendarSyncCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialCalendarSyncCompleted OnSyncComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameInstance* MyGameInstance;
    
public:
    UFortAsyncAction_InitialCalendarSyncCompleted();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_InitialCalendarSyncCompleted* InitialCalendarSyncCompleted(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleInitialCalendarSyncCompleted();
    
};

