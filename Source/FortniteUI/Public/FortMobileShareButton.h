#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortFortMobileShareButtonOS.h"
#include "FortMobileShareButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMobileShareButton : public UCommonButton {
    GENERATED_BODY()
public:
    UFortMobileShareButton();
    UFUNCTION(BlueprintCallable)
    void SetShareParams(const FString& URL, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOSImageEnumSet(EFortFortMobileShareButtonOS OSType);
    
};

