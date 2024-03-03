#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFortReplayEventType.h"
#include "EHudVisibilityState.h"
#include "Templates/SubclassOf.h"
#include "FortTimelineBase.generated.h"

class UCanvasPanel;
class UCommonTextBlock;
class UFortReplayTimelineMarker;
class UOverlay;
class UProgressBar;
class USlider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTimelineBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ConfirmActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortReplayTimelineMarker> TimelineMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Markers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_ProgressBar;
    
public:
    UFortTimelineBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandleReplayTimelineMarkerAdded(EFortReplayEventType EventType, float RelativeTime, int32 EventIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayTimelineChanged(float StartTime, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayTimeChanged(float ReplayTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayHudVisibilityChanged(EHudVisibilityState VisibilityState);
    
};

