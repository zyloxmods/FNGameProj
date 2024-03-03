#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ContextPosition.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "FortHudContextTutorialTipsBase.generated.h"

class UCanvasPanel;
class UFortHudContextTutorialIndicatorBall;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHudContextTutorialTipsBase : public UCommonActivatableWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContextPosition> PositionPerPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Ball;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHudContextTutorialIndicatorBall* ContextTutorialBall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHudContextTutorialIndicatorBall* ContextTutorialBallParented;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLerpSpeedPercentPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseObjectInputAction;
    
public:
    UFortHudContextTutorialTipsBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterCloseButtonInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopIntroAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartWorldMarkerOutroAnimation(int32 InPlayerID, int32 InInstanceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWorldMarkerIntroAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartLerpContextTutorialBall(int32 InPlayerID, int32 InInstanceID, float TotalTime, float StartDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector2D position, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPlatformPosition();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCloseButtonInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonCloseProgressImplementation(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonCloseImplementation();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

