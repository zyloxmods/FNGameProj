#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TimeOfDayManagerReadyAsyncDelegateDelegate.h"
#include "FortAsyncAction_TimeOfDayManagerReady.generated.h"

class UFortAsyncAction_TimeOfDayManagerReady;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_TimeOfDayManagerReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeOfDayManagerReadyAsyncDelegate OnReady;
    
    UFortAsyncAction_TimeOfDayManagerReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_TimeOfDayManagerReady* GetTimeOfDayManagerReady(UObject* WorldContextObject);
    
};

