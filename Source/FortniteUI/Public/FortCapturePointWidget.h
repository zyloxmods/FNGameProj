#pragma once
#include "CoreMinimal.h"
#include "ECaptureState.h"
#include "FortUserWidget.h"
#include "FortCapturePointWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCapturePointWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
    UFortCapturePointWidget();
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
  //  void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, ECaptureState CaptureState, uint8 ControllingTeam);
    
};

