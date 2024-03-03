#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DateFormat.h"
#include "FortEventDateTimeTextBlock.generated.h"

UCLASS(Blueprintable)
class UFortEventDateTimeTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
    UFortEventDateTimeTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetTimespanValue(const FTimespan InTimespan, TEnumAsByte<DateFormat> InFormatStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDateTimeValue(const FDateTime InDateTime, TEnumAsByte<DateFormat> InFormatStyle, float InRefreshDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetCountDownCompletionText(const FText InCompletionText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDateTime() const;
    
};

