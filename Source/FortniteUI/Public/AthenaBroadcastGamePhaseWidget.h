#pragma once
#include "CoreMinimal.h"
#include "AthenaGamePhaseWidgetBase.h"
#include "AthenaBroadcastGamePhaseWidget.generated.h"

class AFortMinigame;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaBroadcastGamePhaseWidget : public UAthenaGamePhaseWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMinigame* MinigameOverride;
    
public:
    UAthenaBroadcastGamePhaseWidget();
    UFUNCTION(BlueprintCallable)
    void SetMinigameOverride(AFortMinigame* Minigame);
    
};

