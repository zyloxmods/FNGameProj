#pragma once
#include "CoreMinimal.h"
#include "CommonNumberFormattingOptions.h"
#include "CommonTextBlock.h"
#include "ECommonNumericType.h"
#include "CommonNumericTextBlock.generated.h"

class UCommonNumericTextBlock;

UCLASS(Blueprintable)
class COMMONUI_API UCommonNumericTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOutro, UCommonNumericTextBlock*, NumericTextBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInterpolationUpdated, UCommonNumericTextBlock*, NumericTextBlock, float, LastValue, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInterpolationStarted, UCommonNumericTextBlock*, NumericTextBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpolationEnded, UCommonNumericTextBlock*, NumericTextBlock, const bool, HadCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpolationStarted OnInterpolationStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpolationUpdated OnInterpolationUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOutro OnOutroEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpolationEnded OnInterpolationEndedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentNumericValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonNumericType NumericType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonNumberFormattingOptions FormattingSpecification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOutInterpolationExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostInterpolationShrinkDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerformSizeInterpolation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPercentage;
    
public:
    UCommonNumericTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetNumericType(ECommonNumericType InNumericType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(const float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpolatingNumericValue() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetValue() const;
    
};

