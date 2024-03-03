#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_Focus.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* StopFocusingSprite;
    
public:
    UFortMobileActionButtonBehavior_Focus();
private:
    UFUNCTION(BlueprintCallable)
    void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
    
    UFUNCTION(BlueprintCallable)
    void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
    
};

