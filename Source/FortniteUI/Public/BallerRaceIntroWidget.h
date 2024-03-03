#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "BallerRaceIntroWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBallerRaceIntroWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthOfCountdown;
    
public:
    UBallerRaceIntroWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCountdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowIntro();
    
};

