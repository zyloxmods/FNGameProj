#pragma once
#include "CoreMinimal.h"
#include "FortItemTileButton.h"
#include "FortRotatingItemTileButton.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRotatingItemTileButton : public UFortItemTileButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenRotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsItemRotateAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> ItemsToRotate;
    
public:
    UFortRotatingItemTileButton();
    UFUNCTION(BlueprintCallable)
    void StopRotating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPlayingRotateItemAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartRotating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPlayingRotateItemAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeBeweenRotations(float InTimeBetweenRotations);
    
    UFUNCTION(BlueprintCallable)
    void SetNeedsItemRotateAnimation(bool InNeedsItemRotationAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RotateToNextItem();
    
};

