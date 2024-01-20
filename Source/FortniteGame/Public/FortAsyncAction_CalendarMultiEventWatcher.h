#pragma once
#include "CoreMinimal.h"
#include "FortAsyncAction_CalendarEventWatcherBase.h"
#include "FortAsyncAction_CalendarMultiEventWatcher.generated.h"

class UFortAsyncAction_CalendarMultiEventWatcher;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_CalendarMultiEventWatcher : public UFortAsyncAction_CalendarEventWatcherBase {
    GENERATED_BODY()
public:
    UFortAsyncAction_CalendarMultiEventWatcher();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_CalendarMultiEventWatcher* WatchCalendarEvents(UObject* WorldContextObject, TArray<FString> EventsToWatch);
    
};

