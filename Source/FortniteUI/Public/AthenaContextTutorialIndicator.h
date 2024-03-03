#pragma once
#include "CoreMinimal.h"
#include "AthenaMarkedActorIndicator.h"
#include "AthenaContextTutorialIndicator.generated.h"

class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaContextTutorialIndicator : public UAthenaMarkedActorIndicator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffscreenMaxTreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Icon_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenEdgePaddingSizePercent;
    
public:
    UAthenaContextTutorialIndicator();
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchIndicatorSize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScreenPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIndicatorText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBounceAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinTreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxTreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxOffscreenTreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDotProduct() const;
    
};

