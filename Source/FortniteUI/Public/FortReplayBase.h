#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortReplayBase.generated.h"

class UFortReplayContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortReplayContext* ReplayContext;
    
public:
    UFortReplayBase();
    UFUNCTION(BlueprintCallable)
    void SetReplayContext(UFortReplayContext* InReplayContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimelineRangeChanged(float StartTime, float EndTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayPausedChanged(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaybackTimeChanged(float NowTime);
    
};

