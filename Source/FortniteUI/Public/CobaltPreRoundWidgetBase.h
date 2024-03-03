#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltPreRoundWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltPreRoundWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
    UCobaltPreRoundWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdatePreRoundWidgetVisibility_BP(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdatePreRoundWidgetVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreRoundWidgetInfo_BP(int32 CurrentActiveRound, const FText& RoundName, const FText& POIName);
    
};

