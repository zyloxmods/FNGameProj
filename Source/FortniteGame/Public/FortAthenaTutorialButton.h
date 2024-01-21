#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorialBaseInteraction.h"
#include "FortAthenaTutorialButton.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialButton : public UFortAthenaTutorialBaseInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_Tutorial;
    
public:
    UFortAthenaTutorialButton();
    UFUNCTION(BlueprintCallable)
    void OnTutorialButtonClicked();
    
};

