#pragma once
#include "CoreMinimal.h"
#include "DiscoCaptureUIData.h"
#include "EDiscoCaptureUIState.h"
#include "FortHUDElementWidget.h"
#include "DiscoCaptureWidgetBase.generated.h"

class AAthenaCapturePoint;
class AFortPlayerPawnAthena;
class AFortPlayerStateZone;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UDiscoCaptureWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDiscoCaptureUIData CaptureUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDiscoCaptureUIData PrevCaptureUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastViewedTeam;
    
public:
    UDiscoCaptureWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDiscoCaptureUI();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCaptureUI(const EDiscoCaptureUIState& CaptureState, const FText& TextToDisplay, const UMaterialInstanceDynamic* ImageMID, float FillAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    AAthenaCapturePoint* GetClosestCapturePoint(AFortPlayerPawnAthena* ViewPawn);
    
};

