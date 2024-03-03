#pragma once
#include "CoreMinimal.h"
#include "ETutorialButtonInteractionType.h"
#include "FortAthenaTutorialBaseInteraction.h"
#include "FortAthenaTutorialButton.generated.h"

class UCommonButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialButton : public UFortAthenaTutorialBaseInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialButtonInteractionType InteractionType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Tutorial;
    
public:
    UFortAthenaTutorialButton();
    UFUNCTION(BlueprintCallable)
    void OnTutorialButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialButtonClicked();
    
};

