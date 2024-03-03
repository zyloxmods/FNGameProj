#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FortActivatablePanel.h"
#include "FortWinterQuestSpecialInteractionScreen.generated.h"

class UFortWinterQuestButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestSpecialInteractionScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestButton* Button_Open;
    
public:
    UFortWinterQuestSpecialInteractionScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputMethodChanged(ECommonInputType NewMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrantReward();
    
};

