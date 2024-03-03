#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "FortSimpleWidgetAnimations.h"
#include "FortSimpleWidgetAnimationsPanel.generated.h"

UCLASS(Blueprintable)
class UFortSimpleWidgetAnimationsPanel : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationsFinished, FName, Name);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationsFinished OnAnimationsFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSimpleWidgetAnimations> Animations;
    
public:
    UFortSimpleWidgetAnimationsPanel();
    UFUNCTION(BlueprintCallable)
    bool StopAnimationByName(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimations();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAnimationByName(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllAnimations();
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationByName(const FName Name, const float Speed);
    
private:
    UFUNCTION(BlueprintCallable)
    void ForwardOnAnimationsFinished(FName Name);
    
};

