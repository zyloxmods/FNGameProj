#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "CommonTextBlock.h"
#include "CommonDateTimeTextBlock.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonDateTimeTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
    UCommonDateTimeTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetTimespanValue(const FTimespan InTimespan);
    
    UFUNCTION(BlueprintCallable)
    void SetDateTimeValue(const FDateTime InDateTime, bool bShowAsCountdown);
    
    UFUNCTION(BlueprintCallable)
    void SetCountDownCompletionText(const FText InCompletionText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDateTime() const;
    
};

