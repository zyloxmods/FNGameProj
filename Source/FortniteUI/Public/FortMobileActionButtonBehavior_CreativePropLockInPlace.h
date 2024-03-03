#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_CreativePropLockInPlace.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_CreativePropLockInPlace : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* LockedSprite;
    
public:
    UFortMobileActionButtonBehavior_CreativePropLockInPlace();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePropLockedInPlaceChanged(bool bPropLockedInPlace);
    
};

