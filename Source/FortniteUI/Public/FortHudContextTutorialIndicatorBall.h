#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortHudContextTutorialIndicatorBall.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortHudContextTutorialIndicatorBall : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanArrowAnimationPlay;
    
    UFortHudContextTutorialIndicatorBall();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowOrientation(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
};

