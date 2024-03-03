#pragma once
#include "CoreMinimal.h"
#include "BacchusActionButton.h"
#include "FocusButton.generated.h"

class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class UFocusButton : public UBacchusActionButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* StartFocusingSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* StopFocusingSprite;
    
public:
    UFocusButton();
private:
    UFUNCTION(BlueprintCallable)
    void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
    
    UFUNCTION(BlueprintCallable)
    void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
    
};

