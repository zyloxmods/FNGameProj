#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativePhone.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_CreativePhone : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
    UFortMobileActionButtonBehavior_CreativePhone();
private:
    UFUNCTION(BlueprintCallable)
    void HandleCreativeQuickbarEnabledChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleCreativeModeEnabledChanged(bool bEnabled);
    
};

