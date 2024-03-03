#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_ToggleRadio.generated.h"

class UPaperSprite;
class URadioContentSourceItemDefinition;
class UStreamingRadioPlayerComponent;

UCLASS(Blueprintable)
class SRIRACHARANCHUI_API UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* ToggleRadioOffSprite;
    
public:
    UFortMobileActionButtonBehavior_ToggleRadio();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, URadioContentSourceItemDefinition* Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, URadioContentSourceItemDefinition* Source);
    
};

