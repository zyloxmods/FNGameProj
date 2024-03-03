#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "LTMPreRoundWidgetBase.generated.h"

class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class ULTMPreRoundWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    ULTMPreRoundWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreRoundWidgetVisibilityChange_BP(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreRoundWidgetVisibilityChange(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreRoundInfo_BP(int32 CurrentRound, const FText& InRoundName, const FText& InPOIName, const USoundBase* InRoundSound);
    
};

