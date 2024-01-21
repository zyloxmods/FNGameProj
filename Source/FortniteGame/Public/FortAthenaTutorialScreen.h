#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortAthenaTutorialScreen.generated.h"

class UFortAthenaTutorialBaseInteraction;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitedDisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialBaseInteraction* Interaction_TutorialStep;
    
public:
    UFortAthenaTutorialScreen();
};

