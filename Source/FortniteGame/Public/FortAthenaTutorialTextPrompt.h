#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortAthenaTutorialTextPrompt.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialTextPrompt : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextToDisplay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_TutorialPrompt;
    
public:
    UFortAthenaTutorialTextPrompt();
};

