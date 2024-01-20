#pragma once
#include "CoreMinimal.h"
#include "EFortReplayEventType.h"
#include "FortActivatablePanel.h"
#include "FortTimelineBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTimelineBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortTimelineBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetProgressBarWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearTimelineMarkers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddReplayEventToTimeline(EFortReplayEventType EventType, float RelativeTime);
    
};

