#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_OctopusToggleGrapple.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_OctopusToggleGrapple : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* GrappleStopSprite;
    
public:
    UFortMobileActionButtonBehavior_OctopusToggleGrapple();
private:
    UFUNCTION(BlueprintCallable)
    void HandleTowhookShot();
    
    UFUNCTION(BlueprintCallable)
    void HandleTowhookHolstered();
    
    UFUNCTION(BlueprintCallable)
    void HandleTowhookDetached();
    
    UFUNCTION(BlueprintCallable)
    void HandleTowhookAttached();
    
};

