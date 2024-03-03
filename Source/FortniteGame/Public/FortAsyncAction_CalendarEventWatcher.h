#pragma once
#include "CoreMinimal.h"
#include "FortAsyncAction_CalendarEventWatcherBase.h"
#include "FortAsyncAction_CalendarEventWatcher.generated.h"

class UFortAsyncAction_CalendarEventWatcher;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_CalendarEventWatcher : public UFortAsyncAction_CalendarEventWatcherBase {
    GENERATED_BODY()
public:
    UFortAsyncAction_CalendarEventWatcher();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_CalendarEventWatcher* WatchCalendarEvent(UObject* WorldContextObject, const FString& EventToWatch);
    
};

