#pragma once
#include "CoreMinimal.h"
#include "HighlightInterface.h"
#include "Components/Widget.h"
#include "TutorialHighlight.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UTutorialHighlight : public UWidget, public IHighlightInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CustomHighlightWidget;
    
public:
    UTutorialHighlight();
    
    // Fix for true pure virtual functions not being implemented
};

