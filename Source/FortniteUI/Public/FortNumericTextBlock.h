#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "FortCountingFinishedDelegate.h"
#include "FortNumericTextBlock.generated.h"

UCLASS(Blueprintable)
class UFortNumericTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCountingFinished CountFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGrouping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOutExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkTime;
    
    UFortNumericTextBlock();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpolatingNumber() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateSet(int32 InValue, float InUpdateLength, float InReportEndEarly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    void DirectlySet(int32 InValue);
    
};

