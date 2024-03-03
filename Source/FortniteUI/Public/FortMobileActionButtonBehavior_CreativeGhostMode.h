#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativeGhostMode.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_CreativeGhostMode : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* GhostModeOffSprite;
    
public:
    UFortMobileActionButtonBehavior_CreativeGhostMode();
private:
    UFUNCTION(BlueprintCallable)
    void HandleCreativeGhostModeEnabledChanged(bool bEnabled);
    
};

