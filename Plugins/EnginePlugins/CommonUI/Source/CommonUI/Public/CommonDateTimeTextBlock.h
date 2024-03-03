#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
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
    void SetDateTimeValue(const FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetCountDownCompletionText(const FText InCompletionText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDateTime() const;
    
};

