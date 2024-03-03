#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_CalendarEventWatcherBase.generated.h"

class UFortGameInstance;

UCLASS(Abstract, Blueprintable)
class UFortAsyncAction_CalendarEventWatcherBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
/*    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientEventFlagChanged OnEventActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientEventFlagChanged OnEventUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientEventFlagChanged OnEventEnded;*/
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameInstance* MyGameInstance;
    
public:
    UFortAsyncAction_CalendarEventWatcherBase();
};

